# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arohani <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/11 13:15:33 by arohani           #+#    #+#              #
#    Updated: 2017/04/11 19:29:59 by arohani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = srcs/ft_putchar.c\
	  srcs/ft_putstr.c\
	  srcs/ft_strcmp.c\
	  srcs/ft_strlen.c\
	  srcs/ft_swap.c

OBJ = ft_putchar.o\
	  ft_putstr.o\
	  ft_strcmp.o\
	  ft_strlen.o\
	  ft_swap.o

HEADER = includes/

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -I $(HEADER)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
