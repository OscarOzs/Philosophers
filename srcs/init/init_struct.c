/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:07:06 by oozsertt          #+#    #+#             */
/*   Updated: 2022/01/31 18:21:16 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static void	*init_data(int ac, char **av, t_data *data)
{
	if (malloc_data(data) == NULL)
		return (NULL);
	data->nbr_of_philo = ft_atoi(av[1]);
	data->time_to_die = ft_atoi(av[2]);
	data->time_to_eat = ft_atoi(av[3]);
	data->time_to_sleep = ft_atoi(av[4]);
	if (ac == 6)
		data->max_eat = ft_atoi(av[5]);
	else
		data->max_eat = -1;
	return (data);
}

// static void	*init_cll(int nbr_of_philo, t_philo *cll)
// {
// 	int		i;
// 	t_philo	*ptr;
// 	t_philo	*tmp;

// 	cll = (t_philo *)malloc(sizeof(t_philo));
// 	if (cll == NULL)
// 		return (NULL);
// 	ptr = cll;
// 	cll = cll->next;
// 	i = 1;
// 	while (i < nbr_of_philo)
// 	{
// 		cll = (t_philo *)malloc(sizeof(t_philo));
// 		if (cll == NULL)
// 			return (NULL);
// 		if (i == 1)
// 			cll->previous = ptr;
// 		else
// 			cll->previous = tmp;
// 		tmp = cll;
// 		cll = cll->next;
// 		i++;
// 	}
// }

void	*init_struct(int ac, char **av, struct timeval *start, t_core *core)
{
	if (init_data(ac, av, core->data) == NULL)
		return (NULL);
	// if (init_cll(core->data->nbr_of_philo, core->cll) == NULL)
	// 	return (NULL);
	return (core);
}