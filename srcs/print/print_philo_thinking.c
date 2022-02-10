/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_philo_thinking.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:29:51 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/10 02:55:59 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	print_philo_thinking(t_philo *philo, long current_time)
{
	pthread_mutex_lock(&philo->data->print_mutex);
	printf("\033[0;37m%ld %d is thinking\n", current_time, philo->id);
	pthread_mutex_unlock(&philo->data->print_mutex);
}
