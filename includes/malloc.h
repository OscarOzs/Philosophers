/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:45:44 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/19 03:44:50 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MALLOC_H
# define MALLOC_H

t_core	*malloc_core(t_core *core);
t_data	*malloc_data(t_data *data);
t_philo	*malloc_nodes(t_philo *cll, t_philo *first_node, int nbr_of_philo);
void	free_core(t_core *core);

#endif