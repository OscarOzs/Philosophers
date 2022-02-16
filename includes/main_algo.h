/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_algo.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:43:38 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/16 20:17:59 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_ALGO_H
# define MAIN_ALGO_H

t_core	*main_algo(int ac, char **av, t_core *core);
t_bool	max_eat_reached(t_philo *philo);
void	check_if_philo_dies(t_philo *philo, long current_time);
void	philo_dies_while_eating(t_philo *philo, long current_time);
void	philo_has_no_time_to_eat(t_philo *philo, long current_time);

#endif