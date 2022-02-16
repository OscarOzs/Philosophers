/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_eat_reached.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:58:43 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/09 15:58:55 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

t_bool	max_eat_reached(t_philo *philo)
{
	if (philo->data->max_eat != -1)
	{
		if (philo->nbr_eat == philo->data->max_eat)
			return (TRUE);
		else
			return (FALSE);
	}
	else
		return (FALSE);
}
