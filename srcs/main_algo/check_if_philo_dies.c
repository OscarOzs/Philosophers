/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_if_philo_dies.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:09:45 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/16 20:16:00 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	check_if_philo_dies(t_philo *philo, long current_time)
{
	if (philo->data->time_to_eat >= philo->data->time_to_die)
		philo_dies_while_eating(philo, current_time);
	else if (philo->data->time_to_eat >= (philo->data->time_to_die
		- philo->data->time_to_eat))
		philo->data->die_while_eating = TRUE;
}