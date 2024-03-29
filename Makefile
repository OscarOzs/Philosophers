# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozsertt <oozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/02 17:36:35 by oozsertt          #+#    #+#              #
#    Updated: 2022/02/23 19:34:25 by oozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

SRCS_PATH =	$(shell find srcs -type d)

OBJ_DIR = $(BUILD)/obj

INC_DIR = $(shell find includes -type d) \

BUILD = .build

vpath %.c $(foreach dir, $(SRCS_PATH), $(dir):)

SRCS = 	philo.c \
		args_are_valid.c \
		init_struct.c \
		one_philosopher_case.c \
		death_routine.c eat_function.c is_philo_dead.c max_eat_reached.c \
		routine.c sleep_function.c think_function.c \
		free_core.c malloc_core.c malloc_data.c malloc_nodes.c \
		print_philo_eating.c print_philo_sleeping.c print_philo_thinking.c \
		ft_atoi.c ft_atol.c ft_isdigit.c get_time.c my_usleep.c \

OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:%.c=%.o))

CFLAGS = -pthread -Wall -Werror -Wextra -g3

BFLAGS =	-DBONUS=1
NOBFLAGS =	-DBONUS=0

IFLAGS		=	$(foreach dir, $(INC_DIR), -I $(dir))

all :
	@make BONUS=$(NOBFLAGS) $(NAME)

$(NAME) : $(OBJS)
	@cc $(CFLAGS) $(BONUS) $(OBJS) -o $(NAME)
	@echo "Executable successfully created\n"

$(OBJ_DIR)/%.o : %.c | $(BUILD)
	@cc $(CFLAGS) $(BONUS) -c $< $(IFLAGS) -o $@

$(BUILD):
	@mkdir $@ $(OBJ_DIR)
	@echo "Object directory created\n"
	@echo "Compiling..\n"

clean :
	@rm -rf $(BUILD)
	@echo "Object directory deleted\n"

fclean : clean
	@rm -rf $(NAME)
	@echo "Executable removed\n"

bonus : fclean
	@make BONUS=$(BFLAGS) $(NAME)

re : fclean all