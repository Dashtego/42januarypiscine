/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:18:10 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/28 15:18:13 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int ac, char **av)
{
	if(ac == 3)
		rush(ft_atoi(av[1]), ft_atoi(av[2]));
	else
		ft_putstr("Invalid entry");
	return (0);
}

void	printline(int width, char left, char center_fill, char right)
{
	if (width > 0)
	{
		ft_putchar(left);
		width--;
	}
	while (width > 1)
	{
		ft_putchar(center_fill);
		width--;
	}
	if (width == 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		if (y > 0)
		{
			printline(x, '/', '*', '\\');
			y--;
		}
		while (y > 1)
		{
			printline(x, '*', ' ', '*');
			y--;
		}
		if (y == 1)
		{
			printline(x, '\\', '*', '/');
		}
	}
}
