/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 20:02:54 by imelvill          #+#    #+#             */
/*   Updated: 2017/02/01 20:49:05 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int		ft_atoi(char *str)
{
	int		i = 0;
	int		nb = 0;

	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb);
}

void	ft_tab_mult(int nb)
{
	int		i;

	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		ft_putchar(' ');
		ft_putchar('x');
		ft_putchar(' ');
		ft_putnbr(nb);
		ft_putchar(' ');
		ft_putchar('=');
		ft_putchar(' ');
		ft_putnbr((nb * i));
		ft_putchar('\n');
		i++;
	}}


int		main(int ac, char **av)
{
	int		nb;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	nb = ft_atoi(av[1]);
	ft_tab_mult(nb);
	return (0);
}
