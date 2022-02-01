/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:59:06 by oozsertt          #+#    #+#             */
/*   Updated: 2022/01/31 18:24:13 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int main(int ac, char **av)
{
	struct timeval	start;

	if (args_are_valid(ac, av) == FALSE)
		return (FAILURE);
	gettimeofday(&start, NULL);
	if (ft_atoi(av[1]) == 1)
		if (one_philosopher_case(ft_atoi(av[2])) == NULL)
			return (1);
	else if (ft_atoi(av[1]) == 2)
		if (two_philosophers_case(ac, av, &start) == NULL)
			return (1);
	return (0);
}
