/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_sq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 07:00:10 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/31 17:50:20 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		sq_size(int **a, int ht, int length)
{
	int		max;
	int		x;
	int		y;

	y = 1;
	x = 1;
	max = 1;
	while (y <= ht)
	{
		if (x > length - 1)
		{
			if (y == ht - 1)
				break ;
			y++;
			x = 0;
		}
		if (a[y][x] > max)
		{
			max = a[y][x];
		}
		x++;
	}
	return (max);
}

char	sq_size_char(char **a, int ht, int length)
{
	char	max;
	int		x;
	int		y;

	y = 1;
	x = 1;
	max = '1';
	while (y <= ht)
	{
		if (x > length - 1)
		{
			if (y == ht - 1)
				break ;
			y++;
			x = 0;
		}
		if (a[y][x] > max)
		{
			max = a[y][x];
		}
		x++;
	}
	return (max);
}

int		ret_y(int **a, int max, int height, int length)
{
	int		x;
	int		y;

	y = 0;
	x = 0;
	while (y <= height)
	{
		if (x > length - 1)
		{
			if (y == height - 1)
				break ;
			y++;
			x = 0;
		}
		if (a[y][x] == max)
		{
			return (y);
		}
		x++;
	}
	return (0);
}

int		ret_x(int **a, int max, int height, int length)
{
	int		x;
	int		y;

	y = 0;
	x = 0;
	while (y <= height)
	{
		if (x > length - 1)
		{
			if (y == height - 1)
				break ;
			y++;
			x = 0;
		}
		if (a[y][x] == max)
		{
			return (x);
		}
		x++;
	}
	return (0);
}
