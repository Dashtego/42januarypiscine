/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 13:48:12 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/15 16:07:17 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printline(int x, int first, int mid, int last)
{
	if (x > 0)
	{
		ft_putchar(first);
		x--;
	}

	while (x > 1)
	{
		ft_putchar(mid);
		x--;
	}

	if ( x == 1)
	{
		ft_putchar(last);
		ft_putchar('\n');
	}
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
			printline(x, 'o', '-', 'o');

	}
}



