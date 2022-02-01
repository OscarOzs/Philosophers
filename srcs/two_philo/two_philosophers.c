/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_philosophers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:03:43 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/01 15:04:11 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static void	*routine(void *node)
{
	
	return (NULL);
}

t_core	*two_philosophers_case(int ac, char **av, struct timeval *start,
t_core *core)
{
	if (malloc_core(core) == NULL)
		return (NULL);
	init_struct(ac, av, start, core);
	// pthread_mutex_init(&mutex, NULL);
	// pthread_create(&philo1, NULL, routine, NULL);
	// pthread_create(&philo2, NULL, routine, NULL);
	
	// pthread_join(philo1, NULL);
	// pthread_join(philo2, NULL);
	// pthread_mutex_destroy(&mutex);
	return (core);
}
