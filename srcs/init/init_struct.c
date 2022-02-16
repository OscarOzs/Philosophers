/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:07:06 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/16 20:15:51 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static t_data	*init_data(int ac, char **av, t_data *data)
{
	data = malloc_data(data);
	if (data == NULL)
		return (NULL);
	data->nbr_of_philo = ft_atoi(av[1]);
	data->time_to_die = ft_atoi(av[2]);
	data->time_to_eat = ft_atoi(av[3]);
	data->time_to_sleep = ft_atoi(av[4]);
	data->one_philo_died = FALSE;
	data->die_while_eating = FALSE;
	if (ac == 6)
		data->max_eat = ft_atoi(av[5]);
	else
		data->max_eat = -1;
	gettimeofday(&data->old_time, NULL);
	return (data);
}

t_philo	*init_cll(int nbr_of_philo, t_philo *cll)
{
	t_philo	*first_node;

	cll = (t_philo *)malloc(sizeof(t_philo));
	if (cll == NULL)
		return (NULL);
	first_node = cll;
	first_node->id = 1;
	cll = cll->next;
	cll = malloc_nodes(cll, first_node, nbr_of_philo);
	if (cll == NULL)
		return (NULL);
	cll->next = first_node;
	return (first_node);
}

static void	init_nodes(int nbr_of_philo, t_philo *nodes, t_data *data)
{
	int		i;
	t_philo	*tmp;
	t_philo	*last_node;

	i = 0;
	tmp = nodes;
	while (i < nbr_of_philo)
	{
		nodes->id = i + 1;
		pthread_mutex_init(&nodes->fork, NULL);
		nodes->has_eaten = 0;
		nodes->nbr_eat = 0;
		nodes->data = data;
		last_node = nodes;
		nodes = nodes->next;
		i++;
	}
	nodes = tmp;
}

t_core	*init_struct(int ac, char **av, t_core *core)
{
	core->data = init_data(ac, av, core->data);
	if (core->data == NULL)
		return (NULL);
	core->cll = init_cll(core->data->nbr_of_philo, core->cll);
	if (core->cll == NULL)
		return (NULL);
	init_nodes(ft_atoi(av[1]), core->cll, core->data);
	pthread_mutex_init(&core->data->print_mutex, NULL);
	pthread_mutex_init(&core->data->philo_dead_mutex, NULL);
	return (core);
}
