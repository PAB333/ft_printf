# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pibreiss <pibreiss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 19:25:04 by pibreiss          #+#    #+#              #
#    Updated: 2024/11/21 00:56:07 by pibreiss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Werror -Wextra -Wall
SRC = ft_printf.c ft_putchar.c ft_printf.h ft_putnbr.c ft_putstr.c

OBJS = $(SRC:%.c=%.o)

.PHONY: all clean fclean re

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(NAME)

re: fclean all