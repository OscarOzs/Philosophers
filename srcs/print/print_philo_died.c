/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_philo_died.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:57:03 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/09 19:34:24 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	print_philo_died(t_philo *philo, long current_time)
{
	pthread_mutex_lock(&philo->data->print_mutex);
	printf("\033[0;31m%ld %d has died\n", current_time, philo->id);
	pthread_mutex_unlock(&philo->data->print_mutex);
}
