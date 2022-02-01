/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_philo.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:12:28 by oozsertt          #+#    #+#             */
/*   Updated: 2022/01/31 18:17:41 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_PHILO_H
# define STRUCT_PHILO_H

typedef struct s_philo
{
	pthread_t	philo;
	int			id;
	t_bool		has_fork;
	t_bool		has_eaten;
	struct s_philo		*next;
	struct s_philo		*previous;
	t_data		*data;
}				t_philo;

#endif