/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 17:59:06 by oozsertt          #+#    #+#             */
/*   Updated: 2022/01/26 16:13:18 by oozsertt         ###   ########.fr       */
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
		one_philosopher_case(ft_atoi(av[2]));
	else if (ft_atoi(av[1]) == 2)
		two_philosophers_case(ac, av, &start);

	return (0);
}
