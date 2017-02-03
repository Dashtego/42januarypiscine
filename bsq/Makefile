# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imelvill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 09:09:59 by imelvill          #+#    #+#              #
#    Updated: 2017/01/31 18:01:40 by imelvill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFILES={map_info.c,map_to_str.c,map_to_da.c,put_array.c,chars_to_nbrs.c,map_calc.c,max_sq.c,sq_to_char.c,fchar_to_x.c}
OBJFILES=map_info.o map_to_str.o map_to_da.o put_array.o chars_to_nbrs.o map_calc.o max_sq.o sq_to_char.o fchar_to_x.o

all: mklib exe

mklib:
	gcc -c ./$(LIBFILES) -I ./libft.h
	ar rc bsqlib.a $(OBJFILES)
	ranlib bsqlib.a
exe:
	gcc -Wall -Wextra -Werror libft.a bsqlib.a main.c -o run

clean:
	-/bin/rm -f $(OBJFILES)

fclean: clean
	-/bin/rm bsqlib.a
	-/bin/rm run

re: fclean all
