# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldusty <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/24 14:06:35 by ldusty            #+#    #+#              #
#    Updated: 2021/12/24 15:03:05 by ldusty           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRC		=	ft_hex_putnbr.c		ft_itoa.c				ft_printf.c\
			ft_putchar.c		ft_putnbr.c				ft_putstr.c\
			ft_unsigned_itoa.c	ft_unsigned_putnbr.c	ft_vpointer.c

HEADER	=	ft_printf.h
OBJ		=	$(SRC:%.c=%.o)

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

.PHONY	=	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar rcs $(NAME) $?

%.o		:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all
