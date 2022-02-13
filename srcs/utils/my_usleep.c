/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_usleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:03:00 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/13 20:29:45 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	my_usleep(int time_to, long current_time, t_philo *philo)
{
	while (get_time(philo->data->old_time) - current_time < time_to)
		usleep(10);
}
