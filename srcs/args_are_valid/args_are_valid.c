/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_are_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:28:20 by oozsertt          #+#    #+#             */
/*   Updated: 2022/01/22 17:59:20 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

static t_bool	args_are_digit(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (ft_isdigit(av[i][j]) == FALSE)
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}

t_bool	args_are_int_range(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_atol(av[i]) > INTMAX
			|| ft_atol(av[i]) < 0)
			return (FALSE);
		i++;
	}
	return (TRUE);
}

t_bool	args_are_valid(int ac, char **av)
{
	if (ac != 5 && ac != 6)
		return (FALSE);
	if (args_are_digit(ac, av) == FALSE)
		return (FALSE);
	if (ft_atol(av[1]) < 1)
		return (FALSE);
	if (args_are_int_range(ac, av) == FALSE)
		return (FALSE);
	return (TRUE);
}
