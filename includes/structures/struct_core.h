/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_core.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:36:58 by oozsertt          #+#    #+#             */
/*   Updated: 2022/01/31 18:09:22 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_CORE_H
# define STRUCT_CORE_H

typedef struct	s_core
{
	t_philo	*cll;
	t_data	*data;
	t_time	*time;
}				t_core;

#endif