/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_philosophers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:03:43 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/05 17:50:26 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

pthread_mutex_t mutex;

static void	*routine(void *node)
{
	t_philo	*philo;

	philo = (t_philo*)node;
	pthread_mutex_lock(&mutex);
	printf("%d %d is eating\n", philo->id, philo->data->time_to_eat);
	usleep(philo->data->time_to_eat * 1000);
	pthread_mutex_unlock(&mutex);
	
	return (node);
}

t_core	*two_philosophers_case(int ac, char **av, struct timeval *start,
t_core *core)
{
	core = malloc_core(core);
	if (core == NULL)
		return (NULL);
	core = init_struct(ac, av, start, core);
	if (core == NULL)
		return (NULL);
	
	int i = 0;
	while (i < ft_atoi(av[1]))
	{
		printf("id : %d\n", core->cll->id);
		printf("has fork : %d\n", core->cll->has_fork);
		printf("has eaten : %d\n", core->cll->has_eaten);
		core->cll = core->cll->next;
		i++;
	}

	// pthread_mutex_init(&mutex, NULL);
	// int	i = 0;
	// while (i < ft_atoi(av[1]))
	// {
		// pthread_create(&core->cll->philo, NULL, routine, core->cll);
		// pthread_join(core->cll->philo, NULL);
		// core->cll = core->cll->next;
		// i++;
	// }
	// pthread_mutex_destroy(&mutex);
	return (core);
}
