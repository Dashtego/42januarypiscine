/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 22:35:39 by imelvill          #+#    #+#             */
/*   Updated: 2017/02/01 23:18:22 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		calc_op(int a, char b, int c)
{
	int		res;

	res = 0;
	if (b == '+')
		res = a + c;
	if (b == '-')
		res = a - c;
	if (b == '*')
		res = a * c;
	if (b == '/')
		res = a / c;
	if (b == '%')
		res = a % c;
	printf("\nres %d\n", res);
	return (res);
}

int		main(int ac, char **av)
{
	if (ac != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	if (av[2][0] == '+' ||  av[2][0] == '-' || av[2][0] == '/' || 
			av[2][0] == '%'|| av[2][0] == '*')
	{
		printf("%d\n", atoi(av[3]));
		ft_putnbr(calc_op(atoi(av[1]), av[2][0], atoi(av[3])));
	}
	else
		ft_putchar('\n');
	return (0);
}
