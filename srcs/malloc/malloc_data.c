/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:40:54 by oozsertt          #+#    #+#             */
/*   Updated: 2022/01/31 18:19:24 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

void	*malloc_data(t_data *data)
{
	data = (t_data *)malloc(sizeof(t_data));
	if (data == NULL)
		return (NULL);
	return (data);
}
