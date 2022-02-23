/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat_function.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:24:22 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 19:37:39 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static int	lock_forks(t_philo *philo)
{
	int	forks;

	forks = 0;
	if (is_philo_dead(philo) == FALSE)
	{
		pthread_mutex_lock(&philo->forks_mutex);
		pthread_mutex_lock(&philo->next->forks_mutex);
		philo->forks = 2;
		forks = 2;
	}
	return (forks);
}

static void	philo_has_eaten(t_philo *philo)
{
	pthread_mutex_lock(&philo->data->meals);
	if (philo->data->meals_to_be_full != -1)
		philo->nbr_eat++;
	pthread_mutex_unlock(&philo->data->meals);
}

static void	unlock_forks(t_philo *philo)
{
	if (philo->forks == 2)
	{
		philo->forks = 0;
		pthread_mutex_unlock(&philo->forks_mutex);
		pthread_mutex_unlock(&philo->next->forks_mutex);
	}
}

void	eat_function(t_philo *philo)
{
	int		forks;
	long	current_time;

	forks = lock_forks(philo);
	current_time = get_time(philo->data->create_time);
	if (forks == 2 && is_philo_dead(philo) == FALSE)
	{
		print_philo_eating(philo);
		my_usleep(philo->data->time_to_eat);
		philo_has_eaten(philo);
		pthread_mutex_lock(&philo->time_mutex);
		philo->time = get_time(0);
		pthread_mutex_unlock(&philo->time_mutex);
	}
	unlock_forks(philo);
}
