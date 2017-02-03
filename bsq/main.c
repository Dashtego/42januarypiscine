/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 16:14:00 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/31 19:36:21 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "bsqlib.h"

int		main(int ac, char **av)
{
	char	*map_original;
	char	**map_2d;
	char	*map_info;
	char	**ef_array;
	int		**map_int;
	int		**mapn;
	int		**max_sq;
	int		msize;
	int		wide;
	int		tall;
	char	**fnbmap;

	if (ac < 2)
	{
		ft_putstr("Invalid file name");
		ft_putchar('\n');
		return (0);
	}
	map_original = open_file(av[1]);
	ft_putstr("\n---Original Map--- \n");
	ft_putstr(map_original);

	wide = length(map_original);
	tall = height(map_original);
	map_info = map_infos(open_file(av[1]));
	ft_putstr("\n---Map Info---\n");
	ft_putstr(map_info);
	ft_putchar('\n');

	map_2d = map_to_da(map_original);
	ft_putstr("\n---Working Map---\n");
	put_char_da(map_to_da(map_original), height(map_original));

	ft_putstr("len=");
	ft_putnbr(wide);
	ft_putstr(" height=");
	ft_putnbr(tall);

	ef_array = chars_to_nbrs(map_2d, map_info, tall, wide);
	ft_putstr("\n---Substitute Map---\n");
	put_char_da((ef_array), tall);
	ft_putchar('\n');

	map_int = int_arr(ef_array, tall, wide);
	ft_putstr("\n---Int Map---\n");
	put_int_da(int_arr(ef_array, tall, wide), tall, wide);
	ft_putchar('\n');

	mapn = calc_array(map_int, wide, tall);
	ft_putstr("\n---Calc Map---\n");
	put_int_da(mapn, tall, wide);
	ft_putchar('\n');

	msize = sq_size(mapn, tall, wide);
	ft_putstr("\n---Max Size---\n");
	ft_putnbr(msize);
	ft_putchar('\n');
	ft_putstr("\n---Location---\n");
	ft_putchar('y');
	ft_putnbr(ret_y(mapn, msize, tall, wide));
	ft_putchar(' ');
	ft_putchar('x');
	ft_putnbr(ret_x(mapn, msize, tall, wide));
	ft_putchar('\n');
	max_sq = max_sq_arr(mapn, msize, ret_x(mapn, msize, tall, wide), 
			ret_y(mapn, msize, tall, wide)); 
	put_int_da(max_sq, tall, wide);

	ft_putstr("\n---Char(nbr)Map---\n");
	put_char_da(fchar_arr(max_sq, map_info, tall, wide), tall);
	fnbmap = fchar_arr(max_sq, map_info, tall, wide);
	
	ft_putstr("\n---X Map---\n");
	put_char_da(x_char_arr(fnbmap, map_info, tall, wide), tall);






	return (0);
}
