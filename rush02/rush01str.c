/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 17:24:30 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/29 20:26:01 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*g_dest;
int		g_i;

void	ft_printline01(int width, char left, char center_fill, char right)
{
	if (width > 0)
	{
		g_dest[g_i++] = (left);
		width--;
	}
	while (width > 1)
	{
		g_dest[g_i++] = (center_fill);
		width--;
	}
	if (width == 1)
	{
		g_dest[g_i++] = (right);
	}
	g_dest[g_i++] = ('\n');
}

char	*rush01(int x, int y)
{
	int		a;
	int		b;

	a = x;
	b = y;
	g_dest = malloc(sizeof(char) * ((b * (a + 1)) + 1));
	if (x > 0 && y > 0)
	{
		if (y > 0)
		{
			ft_printline01(x, '/', '*', '\\');
			y--;
		}
		while (y > 1)
		{
			ft_printline01(x, '*', ' ', '*');
			y--;
		}
		if (y == 1)
			ft_printline01(x, '\\', '*', '/');
		g_dest[g_i] = 0;
		return (g_dest);
	}
	return (0);
}
