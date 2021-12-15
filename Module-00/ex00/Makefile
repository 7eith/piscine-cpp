# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amonteli <amonteli@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 18:18:12 by amonteli          #+#    #+#              #
#    Updated: 2021/12/15 18:23:36 by amonteli         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME			=		megaphone

CC				=		@clang++

CFLAGS			=		-Wall -Wextra -Werror

SRCS			=		megaphone.cpp

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