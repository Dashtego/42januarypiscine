/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chars_to_nbrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 23:04:53 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/31 04:53:28 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsqlib.h"
#include "libft.h"
#include <stdlib.h>

char	**chars_to_nbrs(char **map, char *map_info, int height, int length)
{
	char	**arr_ef;
	int		len;

	len = length;
	arr_ef = array_to_ef(map, map_info[1], height);
	return (arr_ef);
}

int		**int_arr(char **ef_array, int height, int length)
{
	int		**empty;
	int		**arr_int;

	empty = empty_da_int(height, length);
	arr_int = nbr_array_to_int(ef_array, empty, height, length);
	return(arr_int);
}

char	**array_to_ef(char **map, char a, int height)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (y < height)
	{
		if (map[y][x] == '\0')
		{
			if (y == height - 1)
				return (map);
			y++;
			x = 0;
		}
		if (map[y][x] == a)
			map[y][x] = 'f';
		else
			map[y][x] = 'e';
		x++;
	}
	return (map);
}

int		**empty_da_int(int height, int length)
{
	int		i;
	int		**dblarray;

	i = 0;
	dblarray = (int**)malloc(height * sizeof(dblarray));
	while (i < height)
	{
		dblarray[i] = (int*)malloc((length)  * sizeof(dblarray));
		i++;
	}
	return (dblarray);
}

int		**nbr_array_to_int(char **map, int **empty, int height, int length)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (y <= height)
	{
		if (x > length - 1)
		{
			if (y == height - 1)
				break ;
			y++;
			x = 0;
		}
		if (map[y][x] == 'f')
			empty[y][x] = 0;
		else
			empty[y][x] = 1;
		x++;
	}
	return (empty);
}
