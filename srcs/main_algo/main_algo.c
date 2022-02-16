/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:41:31 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/16 20:21:57 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

/////// FAIRE PHILO HAS NO TIME TO EAT ./philo 4 350 200 100

static void	eat_function(t_philo *philo)
{
	if (philo->data->one_philo_died == FALSE)
	{
		if (philo->data->die_while_eating == TRUE)
			philo_has_no_time_to_eat(philo, get_time(philo->data->old_time));
		check_if_philo_dies(philo, get_time(philo->data->old_time));
		print_philo_eating(philo, get_time(philo->data->old_time));
		my_usleep(philo->data->time_to_eat, get_time(philo->data->old_time),
		philo);
		if (philo->data->max_eat != -1)
			philo->nbr_eat++;
		philo->has_eaten = TRUE;
	}
}

static void	sleep_and_think_function(t_philo *philo)
{
	if (philo->data->one_philo_died == FALSE)
	{
		print_philo_sleeping(philo, get_time(philo->data->old_time));
		my_usleep(philo->data->time_to_sleep, get_time(philo->data->old_time),
		philo);
		print_philo_thinking(philo, get_time(philo->data->old_time));
	}
}

static void	*routine(void *node)
{
	t_philo	*philo;

	philo = (t_philo *)node;
	
	while (philo->data->one_philo_died == FALSE && max_eat_reached(philo) == FALSE)
	{
		pthread_mutex_lock(&philo->fork);
		pthread_mutex_lock(&philo->next->fork);
		eat_function(philo);
		pthread_mutex_unlock(&philo->next->fork);
		pthread_mutex_unlock(&philo->fork);
		if (max_eat_reached(philo) == FALSE && philo->has_eaten == TRUE)
		{
			sleep_and_think_function(philo);
		}
		
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

t_core	*main_algo(int ac, char **av, t_core *core)
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
