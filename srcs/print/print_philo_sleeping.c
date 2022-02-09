/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_philo_sleeping.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:26:22 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/09 23:26:22 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	print_philo_sleeping(t_philo *philo, long current_time)
{
	if (philo->data->one_philo_died == FALSE)
	{
		pthread_mutex_lock(&philo->data->print_mutex);
		printf("\033[0;34m%ld %d is sleeping\n", current_time, philo->id);
		pthread_mutex_unlock(&philo->data->print_mutex);
	}
}