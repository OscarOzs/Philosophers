/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_philo.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:12:28 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/23 01:24:51 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_PHILO_H
# define STRUCT_PHILO_H

typedef struct s_philo
{
	int					id;
	pthread_t			death;
	pthread_t			philo;
	pthread_mutex_t		meals;
	int					nbr_eat;
	int					forks;
	pthread_mutex_t		forks_mutex;
	long				time;
	pthread_mutex_t		time_mutex;
	t_data				*data;
	struct s_philo		*next;
}				t_philo;

#endif