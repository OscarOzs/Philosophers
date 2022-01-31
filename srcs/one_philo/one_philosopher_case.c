/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_philosopher_case.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:20:17 by oozsertt          #+#    #+#             */
/*   Updated: 2022/01/26 16:01:03 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	one_philosopher_case(int time_to_die)
{
	printf("0 1 has taken a fork\n");
	usleep(time_to_die * 1000);
	printf("%d 1 died\n", time_to_die);
}
