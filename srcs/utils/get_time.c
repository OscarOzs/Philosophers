/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:59:04 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/07 19:57:18 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

long	get_time(struct timeval old_time)
{
	struct timeval	current_time;
	long	current_ms;
	long	old_ms;
	long	ret;

	gettimeofday(&current_time, NULL);
	current_ms = (current_time.tv_sec) * 1000 + (current_time.tv_usec) / 1000;
	old_ms = (old_time.tv_sec) * 1000 + (old_time.tv_usec) / 1000;
	ret = current_ms - old_ms;
	return (ret);
}
