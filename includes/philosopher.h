/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 18:14:31 by oozsertt          #+#    #+#             */
/*   Updated: 2022/02/11 13:25:39 by oozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
# define PHILOSOPHER_H

# define ICI printf("ICI\n");

# include <stdio.h>
# include <pthread.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/time.h>

# include "define.h"
# include "parsing.h"
# include "struct_data.h"
# include "struct_philo.h"
# include "struct_core.h"
# include "utils.h"
# include "malloc.h"
# include "init.h"
# include "print_functions.h"
# include "one_philo.h"
# include "main_algo.h"

#endif