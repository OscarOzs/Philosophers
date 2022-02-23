/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_core.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:53:28 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 04:58:54 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	free_core(t_core *core)
{
	t_philo	*philo;
	t_philo	*tmp;
	int		i;

	pthread_mutex_destroy(&core->data->meals);
	pthread_mutex_destroy(&core->data->death);
	pthread_mutex_destroy(&core->data->init);
	pthread_mutex_destroy(&core->data->print_mutex);
	i = 0;
	philo = core->cll;
	while (i < core->data->nbr_of_philo)
	{
		tmp = philo->next;
		pthread_mutex_destroy(&philo->meals);
		pthread_mutex_destroy(&philo->forks_mutex);
		pthread_mutex_destroy(&philo->time_mutex);
		free(philo);
		philo = tmp;
		i++;
	}
	free(core->data);
	free(core);
}
