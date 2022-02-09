/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_core.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:53:28 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/09 15:51:15 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	free_core(t_core *core)
{
	t_philo	*philo;
	t_philo	*tmp;
	int		i;

	i = 0;
	philo = core->cll;
	while (i < core->data->nbr_of_philo)
	{
		pthread_mutex_destroy(&philo->fork);
		tmp = philo->next;
		free(philo);
		philo = tmp;
		i++;
	}
	pthread_mutex_destroy(&core->data->print_mutex);
	free(core->data);
	free(core);
}
