/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:40:54 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/01 16:29:10 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

t_data	*malloc_data(t_data *data)
{
	data = (t_data *)malloc(sizeof(t_data) * 1);
	if (data == NULL)
		return (NULL);
	return (data);
}
