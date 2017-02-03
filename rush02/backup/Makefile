# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imelvill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 09:09:59 by imelvill          #+#    #+#              #
#    Updated: 2017/01/28 15:24:16 by imelvill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFILES={ft_putchar.c,ft_putstr.c,ft_strcmp.c,ft_strlen.c,ft_swap.c,ft_atoi.c}
OBJFILES=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o ft_atoi.o
RUSHDIR=./rushfiles
FLAGS=-Wall -Wextra -Werror

all: mklib rushexe

mklib:
	-gcc -c $(FLAGS) ./srcs/$(LIBFILES) -I ./libft.h
	-ar rc libft.a $(OBJFILES)
	ranlib libft.a

rushexe:
	gcc $(FLAGS) $(RUSHDIR)/rush00.c -o rush-00 libft.a
	-gcc $(FLAGS) $(RUSHDIR)/rush01.c -o rush-01 libft.a
	-gcc $(FLAGS) $(RUSHDIR)/rush02.c -o rush-02 libft.a
	-gcc $(FLAGS) $(RUSHDIR)/rush03.c -o rush-03 libft.a
	-gcc $(FLAGS) $(RUSHDIR)/rush04.c -o rush-04 libft.a

clean:
	/bin/rm -f $(OBJFILES)

fclean: clean
	/bin/rm libft.a
	/bin/rm rush-00 rush-01 rush-02 rush-03 rush-04

re: fclean all
