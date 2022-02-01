/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_philosophers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:03:43 by oozsertt          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/02/01 13:56:55 by oozsertt         ###   ########.fr       */
=======
/*   Updated: 2022/01/31 17:38:45 by oozsertt         ###   ########.fr       */
>>>>>>> d855df95045180b36c0a0e97a4efdde8c2ab6d6e
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static void	*routine(void *node)
{
	
	return (NULL);
}

<<<<<<< HEAD
t_core	*two_philosophers_case(int ac, char **av, struct timeval *start,
t_core *core)
{
=======
void	*two_philosophers_case(int ac, char **av, struct timeval *start)
{
	t_core	*core;
>>>>>>> d855df95045180b36c0a0e97a4efdde8c2ab6d6e

	if (malloc_core(core) == NULL)
		return (NULL);
	init_struct(ac, av, start, core);
	// pthread_mutex_init(&mutex, NULL);
	// pthread_create(&philo1, NULL, routine, NULL);
	// pthread_create(&philo2, NULL, routine, NULL);
	
	// pthread_join(philo1, NULL);
	// pthread_join(philo2, NULL);
	// pthread_mutex_destroy(&mutex);
<<<<<<< HEAD
	return (core);
=======
>>>>>>> d855df95045180b36c0a0e97a4efdde8c2ab6d6e
}
