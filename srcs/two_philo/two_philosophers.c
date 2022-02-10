/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_philosophers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:03:43 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/10 03:41:57 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static void	eating_function(t_philo *philo)
{
	long	current_time;

	pthread_mutex_lock(&philo->fork);
	pthread_mutex_lock(&philo->next->fork);
	current_time = get_time(philo->data->old_time);
	philo->last_time_eat = get_time(philo->data->old_time);
	if (philo->data->time_to_eat >= philo->data->time_to_die)
		philo_dies_while_eating(philo);
	else
	{
		if (philo->data->one_philo_died == FALSE)
			print_philo_eating(philo, current_time);
		philo->has_eaten = 1;
		if (philo->data->max_eat != -1)
			philo->nbr_eat++;
		usleep(philo->data->time_to_eat * 1000);
	}
	pthread_mutex_unlock(&philo->fork);
	pthread_mutex_unlock(&philo->next->fork);
}

static void	sleep_and_think_function(t_philo *philo)
{
	long	current_time;

	if (philo->has_eaten == 1)
	{
		current_time = get_time(philo->data->old_time);
		if (philo->data->time_to_sleep >= philo->data->time_to_die)
			philo_dies_while_sleeping(philo);
		else
		{
			philo->last_time_sleep = get_time(philo->data->old_time);
			usleep(philo->data->time_to_sleep * 1000);
			if (philo->data->one_philo_died == FALSE)
				print_philo_sleeping(philo, current_time);
			current_time = get_time(philo->data->old_time);
			if (philo->data->one_philo_died == FALSE)
				print_philo_thinking(philo, current_time);
		}
	}
}

static void	*routine(void *node)
{
	t_philo	*philo;

	philo = (t_philo *)node;
	while (is_philo_dead(philo) == FALSE && max_eat_reached(philo) == FALSE)
	{
		if (philo->data->one_philo_died == TRUE)
			break ;
		eating_function(philo);
		sleep_and_think_function(philo);
	}
	return (node);
}

static void	thread_call_routine(t_philo *cll)
{
	t_philo	*tmp;
	int		i;

	i = 0;
	tmp = cll;
	while (i < cll->data->nbr_of_philo)
	{
		pthread_create(&cll->philo, NULL, &routine, cll);
		cll = cll->next;
		i++;
	}
	i = 0;
	cll = tmp;
	while (i < cll->data->nbr_of_philo)
	{
		pthread_join(cll->philo, NULL);
		cll = cll->next;
		i++;
	}
}

t_core	*two_philosophers_case(int ac, char **av, t_core *core)
{
	core = malloc_core(core);
	if (core == NULL)
		return (NULL);
	core = init_struct(ac, av, core);
	if (core == NULL)
		return (NULL);
	thread_call_routine(core->cll);
	return (core);
}
