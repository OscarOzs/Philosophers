/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_philosophers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:03:43 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/05 19:45:42 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static void	*routine(void *node)
{
	t_philo	*philo;

	philo = (t_philo*)node;
	pthread_mutex_lock(&philo->has_fork);
	printf("%d has taken a fork\n", philo->id);
	pthread_mutex_lock(&philo->next->has_fork);
	printf("%d has taken a fork\n", philo->id);
	printf("%d is eating\n", philo->id);
	usleep(philo->data->time_to_eat * 1000);
	pthread_mutex_unlock(&philo->has_fork);
	pthread_mutex_unlock(&philo->next->has_fork);
	while (1)
	{
		
	}
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
	
	int	i = 0;
	t_philo *tmp = core->cll;
	while (i < ft_atoi(av[1]))
	{
		pthread_create(&core->cll->philo, NULL, &routine, core->cll);
		core->cll = core->cll->next;
		i++;
	}
	i = 0;
	core->cll = tmp;
	while (i < ft_atoi(av[1]))
	{
		pthread_join(core->cll->philo, NULL);
		core->cll = core->cll->next;
		i++;
	}
	return (core);
}
