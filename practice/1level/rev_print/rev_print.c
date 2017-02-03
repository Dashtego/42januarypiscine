/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 00:10:07 by imelvill          #+#    #+#             */
/*   Updated: 2017/02/01 00:22:49 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}










int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i] != '\0')
	{
		i++;
	}
	i--;
	while (av[1][i])
	{
		ft_putchar(av[1][i]);
		i--;
	}
	ft_putchar('\n');
	return (0);
}

