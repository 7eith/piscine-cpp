# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/27 17:30:03 by amonteli          #+#    #+#              #
#    Updated: 2022/01/06 20:27:42 by amonteli         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME			=		ex00

CC				=		@clang++

CFLAGS			=		-Wall -Wextra -Werror

SRCS			=		main.cpp ClapTrap.cpp

HEADERS			=		ClapTrap.hpp

OBJS			=		$(SRCS:.cpp=.o)

all				:		$(NAME)

$(NAME)		: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "\033[34m[$(NAME)] Compiled! \033[0m"

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean		:
		@/bin/rm -f $(OBJS)
		@echo "\033[90m[\033[91m$(NAME)\033[90m]\033[31m Cleaned up objects. \033[0m"

fclean		:		clean
		@/bin/rm -f $(NAME)
		@echo "\033[90m[\033[91m$(NAME)\033[90m]\033[31m Deleted executable. \033[0m"

re			:		fclean all

.PHONY: all bonus clean fclean re
