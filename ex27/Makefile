# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 15:46:09 by ndubouil          #+#    #+#              #
#    Updated: 2017/11/10 16:36:56 by ndubouil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SRCC = ft_putchar.c		\
	   ft_putstr.c		\
	   ft_error.c
SRCO = ft_putchar.o		\
	   ft_putstr.o		\
	   ft_error.o
HEADER = ft.h
MAIN = main.c

all: $(NAME)

$(NAME):
		$(CC) -I $(HEADER) $(FLAGS) -c $(SRCC)
		$(CC) -I $(HEADER) $(FLAGS) $(SRCO) $(MAIN) -o $(NAME)

clean:
		rm -rf $(SRCO)

fclean: clean
		rm -rf $(NAME)

re: fclean all
