/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_calc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 04:58:45 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/31 16:32:10 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "bsqlib.h"

int		**calc_array(int **a, int length, int height)
{
	int		x;
	int		y;

	x = 1;
	y = 1;
	while (y < height)
	{
		if (x > length)
		{
			if (y == height - 1)
				break ;
			y++;
			x = 1;
		}
		if (a[y][x] != 0)
			a[y][x] = ft_min(a[y - 1][x], a[y][x - 1], a[y - 1][x - 1]) + 1;
		x++;
	}
	return (a);
}

int		ft_min(int a, int b, int c)
{
	int		min;

	min = 0;
	while (a && b && c)
	{
		a--;
		b--;
		c--;
		min++;
	}
	return (min);
}

int		**max_sq_arr(int **a, int max, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < max || j < max)
	{
		if (i == max)
		{
			j++;
			if (j == max)
				break ;
			i = 0;
		}
		a[y - j][x - i] = max;
		i++;
	}
	return (a);
}

