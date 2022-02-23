/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_philo_eating.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:30:31 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 19:38:16 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	print_philo_eating(t_philo *philo)
{
	pthread_mutex_lock(&philo->data->print_mutex);
	if (is_philo_dead(philo) == FALSE)
	{
		printf("\033[0;33m%ld %d has taken a fork\n",
			get_time(philo->data->create_time), philo->id);
		printf("\033[0;33m%ld %d has taken a fork\n",
			get_time(philo->data->create_time), philo->id);
		printf("\033[0;32m%ld %d is eating\n",
			get_time(philo->data->create_time), philo->id);
	}
	pthread_mutex_unlock(&philo->data->print_mutex);
}
