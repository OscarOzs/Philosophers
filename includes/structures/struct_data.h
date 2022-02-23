/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_data.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:22:24 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 01:32:54 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_DATA_H
# define STRUCT_DATA_H

typedef struct s_data
{
	int				nbr_of_philo;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	long			create_time;
	int				meals_to_be_full;
	pthread_mutex_t	meals;
	t_bool			philo_died;
	pthread_mutex_t	death;
	pthread_mutex_t	init;
	pthread_mutex_t	print_mutex;
}				t_data;

#endif