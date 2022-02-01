/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_philosopher_case.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:20:17 by oozsertt          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/02/01 14:57:08 by oozsertt         ###   ########.fr       */
=======
/*   Updated: 2022/01/31 18:23:30 by oozsertt         ###   ########.fr       */
>>>>>>> d855df95045180b36c0a0e97a4efdde8c2ab6d6e
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	*one_philosopher_case(int time_to_die)
{
	printf("0 1 has taken a fork\n");
	usleep(time_to_die * 1000);
	printf("%d 1 died\n", time_to_die);
}
