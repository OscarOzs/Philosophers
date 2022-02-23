/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algo.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:43:38 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/22 05:59:42 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_ALGO_H
# define MAIN_ALGO_H

t_core	*main_algo(int ac, char **av, t_core *core);
void	*death_routine(void *philo);
t_bool	is_philo_dead(t_philo *philo);
t_bool	max_eat_reached(t_philo *philo);
void	eat_function(t_philo *philo);
void	sleep_function(t_philo *philo);
void	think_function(t_philo *philo);

#endif