/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_philo_dead.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:26:47 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 01:16:55 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

t_bool	is_philo_dead(t_philo *philo)
{
	pthread_mutex_lock(&philo->data->death);
	if (philo->data->philo_died == TRUE)
	{
		pthread_mutex_unlock(&philo->data->death);
		return (TRUE);
	}
	pthread_mutex_unlock(&philo->data->death);
	return (FALSE);
}
