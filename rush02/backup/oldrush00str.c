/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:53:35 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/28 19:53:24 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*printline(int width, char left, char center_fill, char right, char *dest, int *y)
{
	int		i;

	i = 0;
	if (width > 0)
	{
		dest[i] = (left);
		width--;
		i++;
	}
	while (width > 1)
	{
		dest[i] = (center_fill);
		width--;
		i++;
	}
	if (width == 1)
	{
		dest[i] = (right);
		i++;
	}
	dest[i] = ('\n');
	i++;
	if (y[0] == 1)
	{
	  dest[i] = '\0';
	}
	return (&dest[i]);
}

char	*rush00(int x, int y)
{
	char	*dest;
	int		a;
	int		b;

	a = x;
	b = y;
	dest = malloc(sizeof(char) * ((y * (x + 1)) + 1));
	if (x > 0 && y > 0)
	{
		if (y > 0)
		{
			dest = printline(x, 'o', '-', 'o', dest, &y);
			y--;
		}
		while (y > 1)
		{
			dest = printline(x, '|', ' ', '|', dest, &y);
			y--;
		}
		if (y == 1)
			dest = printline(x, 'o', '-', 'o', dest, &y);
		return (&dest[(-1 * (b * (a + 1)))]);
	}
	return (0);
}

int		main()
{
	char	*str;

	str = rush00(4, 1);
	printf("%s", str);
	return (0);
}
