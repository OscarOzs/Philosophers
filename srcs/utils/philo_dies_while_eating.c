/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_dies_while_eating.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:53:24 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/09 23:02:36 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	philo_dies_while_eating(t_philo *philo)
{
	long	current_time;

	current_time = get_time(philo->data->old_time);
	print_philo_eating(philo, current_time);
	usleep(philo->data->time_to_eat * 1000);
	current_time = get_time(philo->data->old_time);
	print_philo_died(philo, current_time);
	philo->data->one_philo_died = TRUE;
}
