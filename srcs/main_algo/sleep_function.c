/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleep_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 05:23:47 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 19:37:29 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	sleep_function(t_philo *philo)
{
	long	current_time;

	current_time = get_time(philo->data->create_time);
	if (is_philo_dead(philo) == FALSE)
	{
		print_philo_sleeping(philo);
		my_usleep(philo->data->time_to_sleep);
	}
}
