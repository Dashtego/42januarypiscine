/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_da.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 18:44:41 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/31 04:45:51 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "bsqlib.h"
#include "libft.h"

char	**empty_da(int height, int length)
{
	int		i;
	char	**dblarray;

	i = 0;
	dblarray = (char**)malloc(height * sizeof(dblarray));
	while (i < height)
	{
		dblarray[i] = (char*)malloc((length + 1) * sizeof(dblarray));
		i++;
	}
	return (dblarray);
}

char	**fill_da(char *str, char **dblarray)
{
	int		i;
	int		y;
	int		x;

	i = 0;
	y = 0;
	x = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i])
	{
		if (str[i] != '\n')
			dblarray[y][x++] = str[i];
		else
		{
			dblarray[y++][x] = '\0';
			x = 0;
		}
		i++;
	}
	return (dblarray);
}

char	**map_to_da(char *str)
{
	return (fill_da(str, (empty_da(height(str), length(str)))));
}

int		length(char *str)
{
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\n')
	{
		len++;
		i++;
	}
	return (len);
}

int		height(char *str)
{
	int	ht;
	int	i;

	ht = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			ht++;
		}
		i++;
	}
	return (ht - 1);
}
