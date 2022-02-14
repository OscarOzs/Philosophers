/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_dies_while_eating.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:53:24 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/14 14:23:28 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static void	philo_has_no_time_to_eat(t_philo *philo, long current_time)
{
	print_philo_eating(philo, current_time);
	my_usleep(philo->data->time_to_die, current_time, philo);
	current_time = get_time(philo->data->old_time);
	print_philo_died(philo, current_time);
}

static void	second_philo_has_no_time_to_eat(t_philo *philo, long current_time)
{
	current_time = get_time(philo->data->old_time);
	print_philo_eating(philo, current_time);
	print_philo_eating(philo->previous, current_time);
	my_usleep(philo->data->time_to_eat, current_time, philo);
	current_time = get_time(philo->data->old_time);
	print_philo_sleeping(philo, current_time);
	print_philo_sleeping(philo->previous, current_time);
	print_philo_eating(philo->previous->previous, current_time);
	print_philo_eating(philo->previous->previous, current_time);
	my_usleep((philo->data->time_to_die - philo->data->time_to_eat),
		current_time, philo);
	current_time = get_time(philo->data->old_time);
	print_philo_died(philo->previous->previous, current_time);
}

void	philo_dies_while_eating(t_philo *philo)
{
	long	current_time;

	philo->data->one_philo_died = TRUE;
	current_time = get_time(philo->data->old_time);
	if (philo->data->time_to_eat >= philo->data->time_to_die)
		philo_has_no_time_to_eat(philo, current_time);
	else if (philo->data->time_to_eat >= (philo->data->time_to_die
			- philo->data->time_to_eat))
		second_philo_has_no_time_to_eat(philo, current_time);
}
