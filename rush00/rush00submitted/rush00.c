/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 10:26:03 by jroth             #+#    #+#             */
/*   Updated: 2017/01/15 10:27:38 by jroth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
			printline(x, 'o', '-', 'o');
			y--;
		}
		while (y > 1)
		{
			printline(x, '|', ' ', '|');
			y--;
		}
		if (y == 1)
		{
			printline(x, 'o', '-', 'o');
		}
	}
}
