/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 23:34:57 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/29 16:19:34 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

void	ft_putchar(char c);
int		ft_rushident00(int x, int y, char *str);

int	xcount(char *str)
{
	int count = 0;

	while (str[count] != '\n')
		count++;
	return (count);
}

int		ycount(char *str)
{
	int		i = 0;
	int		y = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			y++;
		}
		i++;
	}
	return (y);
}

void	printxy(int x, int y)
{
	ft_putchar('[');
	ft_putnbr(x);
	ft_putchar(']');
	ft_putchar(' ');
	ft_putchar('[');
	ft_putnbr(y);
	ft_putchar(']');
}

int		main()
{
	int		i;
	char 	*ret;
	char 	buf[1];
	int		ident;

	ident = 0;
	i = 0;
	ret = (char*)malloc(sizeof(*ret));
	while (read(0, buf, 1) > 0)
	{
		ret[i] = buf[0];
		i++;
	}
	ident = ft_rushident00(xcount(ret), ycount(ret), ret);
	if (ident == 0)
	{
		ft_putstr("nomatch ");
		return (0);
	}
	else if (ident == 1)
		ft_putstr("[rush-00]");
	printxy(xcount(ret), ycount(ret));
	return (0);
}
