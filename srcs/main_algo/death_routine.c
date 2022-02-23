/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   death_routine.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 05:42:36 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 19:37:15 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	*death_routine(void *node)
{
	t_philo	*philo;
	long	current_time;

	philo = (t_philo *)node;
	while (is_philo_dead(philo) == FALSE && max_eat_reached(philo) == FALSE)
	{
		pthread_mutex_lock(&philo->time_mutex);
		current_time = get_time(philo->time);
		if (current_time >= philo->data->time_to_die
			&& is_philo_dead(philo) == FALSE && max_eat_reached(philo) == FALSE)
		{
			pthread_mutex_lock(&philo->data->death);
			printf("\033[0;31m%ld %d has died\n",
				get_time(philo->data->create_time), philo->id);
			philo->data->philo_died = TRUE;
			pthread_mutex_unlock(&philo->data->death);
		}
		pthread_mutex_unlock(&philo->time_mutex);
	}
	return (philo);
}
