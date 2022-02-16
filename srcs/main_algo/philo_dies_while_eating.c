/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_dies_while_eating.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:08:35 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/16 20:18:26 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	philo_has_no_time_to_eat(t_philo *philo, long current_time)
{
	print_philo_eating(philo, current_time);
	my_usleep(philo->data->time_to_die, current_time, philo);
	print_philo_died(philo, current_time);
	philo->data->one_philo_died = TRUE;
}

void	philo_dies_while_eating(t_philo *philo, long current_time)
{
	print_philo_eating(philo, current_time);
	my_usleep(philo->data->time_to_die, current_time, philo);
	print_philo_died(philo, get_time(philo->data->old_time));
	philo->data->one_philo_died = TRUE;
}
