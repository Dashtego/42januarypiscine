/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 11:27:32 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/29 19:47:08 by erintala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static char *g_top = "/*\\";
static char *g_mid = "* *";
static char *g_bot = "\\*/";

char	ft_printline01(int width, static char *chars, int y, char *dest)
{
	int i;

	i = 0;
	if (width > 0)
	{
		dest[i++] = (chars[0]);
		width--;
	}
	while (width > 1)
	{
		dest[i++] = (chars[1]);
		width--;
	}
	if (width == 1)
	{
		dest[i++] = (chars[2]);
	}
	dest[i++] = ('\n');
	return (&dest[i]);
}

char	*rush01(int x, int y)
{
	int		a;
	int		b;
	char *dest;

	a = x;
	b = y;
	dest = malloc(sizeof(char) * ((b * (a + 1)) + 1));
	if (x > 0 && y > 0)
	{
		if (y > 0)
		{
			dest = ft_printline01(x, g_top, y, dest);
			y--;
		}
		while (y > 1)
		{
			dest = ft_printline01(x, g_mid, y, dest);
			y--;
		}
		if (y == 1)
			dest = ft_printline01(x, g_bot, y, dest);
		dest[0] = 0;
		return (&dest[(-1 * (b * (a + 1)))]);
	}
	return (0);
}
