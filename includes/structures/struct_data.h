/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_data.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:22:24 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/08 17:24:18 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_DATA_H
# define STRUCT_DATA_H

typedef struct	s_data
{
	int				nbr_of_philo;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				max_eat;
	t_bool			one_philo_died;
	pthread_mutex_t	print_mutex;
	struct timeval	old_time;
}				t_data;


#endif