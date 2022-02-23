/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:07:06 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 03:14:11 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static t_data	*init_data(char **av, t_data *data, int ac)
{
	data = malloc_data(data);
	if (data == NULL)
		return (NULL);
	data->nbr_of_philo = ft_atoi(av[1]);
	data->time_to_die = ft_atoi(av[2]);
	data->time_to_eat = ft_atoi(av[3]);
	data->time_to_sleep = ft_atoi(av[4]);
	data->create_time = get_time(0);
	data->philo_died = FALSE;
	if (ac == 6)
		data->meals_to_be_full = ft_atoi(av[5]);
	else
		data->meals_to_be_full = -1;
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

	i = 0;
	tmp = nodes;
	while (i < nbr_of_philo)
	{
		nodes->id = i + 1;
		pthread_mutex_init(&nodes->forks_mutex, NULL);
		pthread_mutex_init(&nodes->time_mutex, NULL);
		pthread_mutex_init(&nodes->meals, NULL);
		nodes->nbr_eat = 0;
		nodes->forks = 0;
		nodes->data = data;
		nodes->time = get_time(0);
		nodes = nodes->next;
		i++;
	}
	nodes = tmp;
}

t_core	*init_struct(int ac, char **av, t_core *core)
{
	core->data = init_data(av, core->data, ac);
	if (core->data == NULL)
		return (NULL);
	core->cll = init_cll(core->data->nbr_of_philo, core->cll);
	if (core->cll == NULL)
		return (NULL);
	init_nodes(ft_atoi(av[1]), core->cll, core->data);
	pthread_mutex_init(&core->data->init, NULL);
	pthread_mutex_init(&core->data->death, NULL);
	pthread_mutex_init(&core->data->meals, NULL);
	pthread_mutex_init(&core->data->print_mutex, NULL);
	return (core);
}
