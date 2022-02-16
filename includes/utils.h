/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:38:58 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/16 18:30:07 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

t_bool	ft_isdigit(int c);
int		ft_atoi(const char *str);
long	ft_atol(const char *str);
long	get_time(struct timeval old_time);
void	my_usleep(int time_to, long current_time, t_philo *philo);

#endif