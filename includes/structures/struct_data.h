/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_data.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:22:24 by oozsertt          #+#    #+#             */
/*   Updated: 2022/01/31 16:24:26 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_DATA_H
# define STRUCT_DATA_H

typedef struct	s_data
{
	int	nbr_of_philo;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	max_eat;
}				t_data;


#endif