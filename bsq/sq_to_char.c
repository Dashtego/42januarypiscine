/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sq_to_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 07:35:34 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/31 19:36:18 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "bsqlib.h"
#include <stdlib.h>

char	**empty_da_char(int height, int length)
{
	int		i;
	char	**dblarray;

	i = 0;
	dblarray = (char**)malloc(height * sizeof(dblarray));
	while (i < height)
	{
		dblarray[i] = (char*)malloc((length)  * sizeof(dblarray));
		i++;
	}
	return (dblarray);
}

char	**int_array_to_char(int **map, char **empty, int height, int length)
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
		empty[y][x] = map[y][x] + '0';
		x++;
	}
	return (empty);
}

char	**fchar_arr(int **a, char *key, int height, int length)
{
	char	**empty;
	char	**arr_char;
	char	**xarr;

	empty = empty_da_char(height, length);
	arr_char = int_array_to_char(a, empty, height, length);
	return(arr_char);
}

void	foundx(char **a, char found, int y, int x)
{
	int		i;
	int		j;
	char	max;

	i = 0;
	j = 0;
	max = (a[y][x]) - '0';
	while (i < max || j < max)
	{
		if (i == (max))
		{
			j++;
			if (j == max)
				break ;
			i = 0;
		}
		a[y + j][x + i] = found;
		i++;
	}
}

char	**fillx(char **a, char *key, int ht, int ln)
{
	int		x;
	int		y;
	char	max;

	x = 1;
	y = 1;
	max = sq_size_char(a, ht, ln);
	while (y <= ht)
	{
		if (a[y][x] == (max))
		{
			foundx(a, key[2], y, x);
			break ;
		}
		if (x > ln - 1)
		{
			if (y == ht - 1)
				break ;
			y++;
			x = 0;
		}
		x++;
	}
	return (a);
}


