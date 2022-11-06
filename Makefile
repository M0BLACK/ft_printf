# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmakhlou <bmakhlou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 17:21:47 by bmakhlou          #+#    #+#              #
#    Updated: 2022/11/04 00:20:39 by bmakhlou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_putnbr.c ft_putstr.c ft_putchar.c ft_print_hex.c ft_printf.c ft_print_hex.c \
		ft_print_p.c ft_putnbr_u.c
CC = cc

CFLAGS = -Wall -Wextra -Werror 
OBJECTS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):$(OBJECTS)
		ar rc $(NAME) $(OBJECTS)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)
				
re:	fclean all