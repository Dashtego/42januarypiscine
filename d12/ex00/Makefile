# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imelvill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 09:09:59 by imelvill          #+#    #+#              #
#    Updated: 2017/01/26 12:05:14 by imelvill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFILES={ft_putstr.c}
OBJFILES=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: mklib

mklib:
	gcc -c ./srcs/$(LIBFILES) -I ./include/libft.h
	ar rc libft.a $(OBJFILES)
	ranlib libft.a

clean:
	/bin/rm -f $(OBJFILES)

fclean: clean
	/bin/rm libft.a

re: fclean all
