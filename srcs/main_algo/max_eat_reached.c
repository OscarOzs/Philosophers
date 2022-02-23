/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_eat_reached.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:27:31 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 01:15:23 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

t_bool	max_eat_reached(t_philo *philo)
{
	pthread_mutex_lock(&philo->meals);
	if (philo->nbr_eat >= philo->data->meals_to_be_full
		&& philo->data->meals_to_be_full != -1)
	{
		pthread_mutex_unlock(&philo->meals);
		return (TRUE);
	}
	pthread_mutex_unlock(&philo->meals);
	return (FALSE);
}
