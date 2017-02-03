/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 11:48:51 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/14 20:51:01 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main()
{
	int		a;

	a =	ft_iterative_power(-1, -1);
	printf(" -1\n-1 = (-1) 0 | ");
	printf("%d\n\n", a);
	a =	ft_iterative_power(0, 3);
	printf(" 0\n3 = 0 | ");
	printf("%d\n\n", a);
	a =	ft_iterative_power(-2, 1);
	printf("  1\n-2 = -2 | ");
	printf("%d\n\n", a);
	a =	ft_iterative_power(-2, 2);
	printf("  2\n-2 = 4 | ");
	printf("%d\n\n", a);
	a =	ft_iterative_power(-2, 3);
	printf("  3\n-2 = -8 | ");
	printf("%d\n\n", a);
	a =	ft_iterative_power(2, 3);
	printf(" 3\n2 = 8 | ");
	printf("%d\n\n", a);
	a =	ft_iterative_power(2, 0);
	printf(" 0\n2 = 1 | ");
	printf("%d\n\n", a);
	return (0);
}
