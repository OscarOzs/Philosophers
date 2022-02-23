/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:59:04 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 19:39:10 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

long	get_time(long time)
{
	int				old_time;
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	old_time = (tv.tv_sec * 1000 + tv.tv_usec / 1000);
	return (old_time - time);
}
