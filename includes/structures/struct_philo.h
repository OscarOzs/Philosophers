/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_philo.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:12:28 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/16 20:15:30 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_PHILO_H
# define STRUCT_PHILO_H

typedef struct s_philo
{
	int					id;
	t_bool				has_eaten;
	int					nbr_eat;
	pthread_t			philo;
	pthread_mutex_t		fork;
	t_data				*data;
	struct s_philo		*next;
}				t_philo;

#endif