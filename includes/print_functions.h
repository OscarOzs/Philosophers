/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:32:45 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/08 18:00:23 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_FUNCTIONS_H
# define PRINT_FUNCTIONS_H

void	print_philo_eating(t_philo *philo, long current_time);
void	print_philo_sleeping(t_philo *philo, long current_time);
void	print_philo_thinking(t_philo *philo, long current_time);
void	print_philo_died(t_philo *philo, long current_time);

#endif