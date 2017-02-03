/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 21:52:34 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/14 22:50:19 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index);

int		main()
{
	int		a;

	printf("Fibonacci Sequence: 0[0], 1[1], 1[2], 2[3], 3[4], 5[5], 8[6], 13[7], 21[8], 34[9], 55[10], 89[11], 144[12], 233[13], 377[14], 610[15], ...");
	a = ft_fibonacci(0);
	printf("\n[0] =");
	printf("%d", a);
	a = ft_fibonacci(1);
	printf("\n[1] =");
	printf("%d", a);
	a = ft_fibonacci(2);
	printf("\n[2] =");
	printf("%d", a);
	a = ft_fibonacci(5);
	printf("\n[5] =");
	printf("%d", a);
	a = ft_fibonacci(9);
	printf("\n[9] =");
	printf("%d", a);
	a = ft_fibonacci(12);
	printf("\n[12] =");
	printf("%d", a);
	a = ft_fibonacci(15);
	printf("\n[15] =");
	printf("%d", a);
	return (0);
}
