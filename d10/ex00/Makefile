# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imelvill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 09:09:59 by imelvill          #+#    #+#              #
#    Updated: 2017/01/23 21:42:10 by imelvill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFILES={ft_putchar.c,ft_putstr.c,ft_strcmp.c,ft_strlen.c,ft_swap.c}
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
