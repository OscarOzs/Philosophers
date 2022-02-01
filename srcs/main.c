/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:59:06 by oozsertt          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/02/01 14:56:55 by oozsertt         ###   ########.fr       */
=======
/*   Updated: 2022/01/31 18:24:13 by oozsertt         ###   ########.fr       */
>>>>>>> d855df95045180b36c0a0e97a4efdde8c2ab6d6e
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int main(int ac, char **av)
{
	struct timeval	start;
	t_core	*core;

	if (args_are_valid(ac, av) == FALSE)
		return (FAILURE);
	gettimeofday(&start, NULL);
<<<<<<< HEAD
	if (av[1][0] == '1')
		one_philosopher_case(ft_atoi(av[2]));
	else if (av[1][0] == '2')
	{
		core = two_philosophers_case(ac, av, &start, core);
		if (core == NULL)
			return (1);
	}
=======
	if (ft_atoi(av[1]) == 1)
		if (one_philosopher_case(ft_atoi(av[2])) == NULL)
			return (1);
	else if (ft_atoi(av[1]) == 2)
		if (two_philosophers_case(ac, av, &start) == NULL)
			return (1);
>>>>>>> d855df95045180b36c0a0e97a4efdde8c2ab6d6e
	return (0);
}
