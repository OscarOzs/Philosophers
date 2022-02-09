/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:38:58 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/09 23:14:43 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

t_bool	ft_isdigit(int c);
int		ft_atoi(const char *str);
long	ft_atol(const char *str);
long	get_time(struct timeval old_time);
t_bool	is_philo_dead(t_philo *philo);
t_bool	max_eat_reached(t_philo *philo);
void	philo_dies_while_eating(t_philo *philo);
void	philo_dies_while_sleeping(t_philo *philo);

#endif