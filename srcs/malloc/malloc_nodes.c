/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_nodes.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:48:24 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/05 17:48:39 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

t_philo	*malloc_nodes(t_philo *cll, t_philo *first_node, int nbr_of_philo)
{
	t_philo	*tmp;
	int	i;

	i = 1;
	while (i < nbr_of_philo)
	{
		cll = (t_philo *)malloc(sizeof(t_philo) * 1);
		if (cll == NULL)
			return (NULL);
		if (i == 1)
		{
			first_node->next = cll;
			cll->previous = first_node;
		}
		else
		{
			tmp->next = cll;
			cll->previous = tmp;
		}
		tmp = cll;
		cll = cll->next;
		i++;
	}
	return (tmp);
}
