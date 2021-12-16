# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/16 19:16:22 by amonteli          #+#    #+#              #
#    Updated: 2021/12/16 19:17:44 by amonteli         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME			=		zombie

CC				=		@clang++

CFLAGS			=		-Wall -Wextra -Werror

HEADERS			=		Zombie.hpp

SRCS			=		main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS			=		$(SRCS:.cpp=.o)

all				:		$(NAME)

$(NAME)		: $(OBJS) $(HEADERS)
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
