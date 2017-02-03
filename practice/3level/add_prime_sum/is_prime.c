/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_prime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 19:19:40 by imelvill          #+#    #+#             */
/*   Updated: 2017/02/01 19:48:10 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_prime(int nb)
{
	int		i;

	i = 1;
	while (i < (nb - 1))
	{
		if (nb % (nb - i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int		ans;

	if (ac != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	ans = is_prime(atoi(av[1]));
	if (ans == 1)
		printf("%s is prime.\n", av[1]);
	else
		printf("%s is NOT prime.\n", av[1]);
	return (0);
}
