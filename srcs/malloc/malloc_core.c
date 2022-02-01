/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_core.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:37:56 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/01 16:22:20 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

t_core	*malloc_core(t_core *core)
{
	core = (t_core *)malloc(sizeof(t_core) * 1);
	if (core == NULL)
		return (NULL);
	return (core);
}
