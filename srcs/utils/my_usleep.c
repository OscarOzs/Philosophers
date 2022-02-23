/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_usleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:03:00 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 05:07:35 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	my_usleep(int time_to)
{
	long	current_time;
	long	start;

	start = get_time(0);
	current_time = start;
	while (time_to + start > current_time)
	{
		usleep(10);
		current_time = get_time(0);
	}
}
