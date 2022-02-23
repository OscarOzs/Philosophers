/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:59:06 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 01:47:52 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int	main(int ac, char **av)
{
	struct timeval	start;
	t_core			*core;

	core = NULL;
	if (args_are_valid(ac, av) == FALSE)
		return (FAILURE);
	gettimeofday(&start, NULL);
	if (ft_atoi(av[1]) == 1)
	{
		one_philosopher_case(ft_atoi(av[2]));
		return (0);
	}
	else
	{
		core = main_algo(ac, av, core);
		if (core == NULL)
			return (1);
	}
	free_core(core);
	return (0);
}
