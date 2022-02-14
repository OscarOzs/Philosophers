/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_dies_while_sleeping.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 23:09:33 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/14 14:23:10 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	philo_dies_while_sleeping(t_philo *philo)
{
	long	current_time;

	current_time = get_time(philo->data->old_time);
	print_philo_sleeping(philo, current_time);
	my_usleep((philo->data->time_to_die - philo->data->time_to_eat),
		current_time, philo);
	current_time = get_time(philo->data->old_time);
	print_philo_died(philo, current_time);
}
