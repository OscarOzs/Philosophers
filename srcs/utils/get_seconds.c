/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_seconds.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:59:04 by oozsertt          #+#    #+#             */
/*   Updated: 2022/01/26 15:04:23 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	get_seconds(t_time *time, struct timeval start)
{
	struct timeval	current_time;

	gettimeofday(&current_time, NULL);
	time->seconds = current_time.tv_sec - start.tv_sec;
}
