/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_philo_dead.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:58:04 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/09 15:58:20 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

t_bool	is_philo_dead(t_philo *philo)
{
	long	current_time;
	long	time_between_eat_and_current_time;

	current_time = get_time(philo->data->old_time);
	time_between_eat_and_current_time = current_time - philo->last_time_eat;
	if (time_between_eat_and_current_time >= philo->data->time_to_die)
	{
		if (philo->data->one_philo_died == FALSE)
		{
			philo->data->one_philo_died = TRUE;
			print_philo_died(philo, current_time);
			return (TRUE);
		}
		return (FALSE);
	}
	else
		return (FALSE);
}
