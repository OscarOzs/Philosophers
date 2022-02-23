/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   think_function.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 05:30:11 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 07:03:58 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	think_function(t_philo *philo)
{
	long	current_time;

	current_time = get_time(philo->data->create_time);
	if (is_philo_dead(philo) == FALSE)
		print_philo_thinking(philo);
}
