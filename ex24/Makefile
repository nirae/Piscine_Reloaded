# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ndubouil <ndubouil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 12:46:51 by ndubouil          #+#    #+#              #
#    Updated: 2017/11/10 13:07:12 by ndubouil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
NAME = libft.a
SRCC = srcs/ft_putchar.c	\
	   srcs/ft_putstr.c		\
	   srcs/ft_strcmp.c		\
	   srcs/ft_strlen.c		\
	   srcs/ft_swap.c
HEADERS = includes/ft.h
SRCO = ft_putchar.o			\
	   ft_putstr.o			\
	   ft_putcmp.o			\
	   ft_strlen.o			\
	   ft_swap.o

all : $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRCC) -I $(HEADERS)
		ar rc $(NAME) $(SRCO)
		ranlib $(NAME)

clean:
		rm -rf $(SRCO)

fclean: clean
		rm -rf $(NAME)

re: fclean all
