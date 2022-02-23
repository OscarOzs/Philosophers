/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:41:31 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 19:39:26 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static void	*routine(void *node)
{
	t_philo	*philo;

	philo = (t_philo *)node;
	pthread_mutex_lock(&philo->data->init);
	pthread_mutex_unlock(&philo->data->init);
	if ((philo->id % 2) == 0)
		my_usleep(100);
	pthread_mutex_lock(&philo->time_mutex);
	philo->time = get_time(0);
	pthread_mutex_unlock(&philo->time_mutex);
	while (is_philo_dead(philo) == FALSE && max_eat_reached(philo) == FALSE)
	{
		eat_function(philo);
		sleep_function(philo);
		think_function(philo);
	}
	return (node);
}

static void	start_threads(t_core *core)
{
	t_philo	*tmp;
	int		i;

	i = 0;
	tmp = core->cll;
	while (i < core->cll->data->nbr_of_philo)
	{
		if (pthread_create(&core->cll->philo, NULL, routine, core->cll) != 0)
			return ;
		if (pthread_create(&core->cll->death, NULL, death_routine, core->cll)
			!= 0)
			return ;
		if (pthread_detach(core->cll->death) != 0)
			return ;
		core->cll = core->cll->next;
		i++;
	}
	i = 0;
	core->cll = tmp;
	while (i < core->cll->data->nbr_of_philo)
	{
		pthread_join(core->cll->philo, NULL);
		core->cll = core->cll->next;
		i++;
	}
}

t_core	*main_algo(int ac, char **av, t_core *core)
{
	core = malloc_core(core);
	if (core == NULL)
		return (NULL);
	core = init_struct(ac, av, core);
	if (core == NULL)
		return (NULL);
	start_threads(core);
	return (core);
}
