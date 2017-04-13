# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arohani <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/13 15:40:11 by arohani           #+#    #+#              #
#    Updated: 2017/04/13 16:02:00 by arohani          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CFLAGS = -Wall -Werror -Wextra

SRC = display_file.c

OBJ = display_file.o

all: $(NAME)

$(NAME):
		gcc -c $(CFLAGS) $(SRC)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all
