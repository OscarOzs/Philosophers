/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 18:14:31 by oozsertt          #+#    #+#             */
/*   Updated: 2022/01/31 18:17:56 by oozsertt         ###   ########.fr       */
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
# include "utils.h"
# include "parsing.h"
# include "struct_seconds.h"
# include "struct_data.h"
# include "struct_philo.h"
# include "struct_core.h"
# include "malloc.h"
# include "init.h"
# include "seconds.h"
# include "one_philo.h"
# include "two_philo.h"


#endif