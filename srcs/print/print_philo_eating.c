/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_philo_eating.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:30:31 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/09 23:25:50 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	print_philo_eating(t_philo *philo, long current_time)
{
	if (philo->data->one_philo_died == FALSE)
	{
		pthread_mutex_lock(&philo->data->print_mutex);
		printf("\033[0;33m%ld %d has taken a fork\n", current_time, philo->id);
		printf("\033[0;33m%ld %d has taken a fork\n", current_time, philo->id);
		printf("\033[0;32m%ld %d is eating\n", current_time, philo->id);
		pthread_mutex_unlock(&philo->data->print_mutex);
	}
}
