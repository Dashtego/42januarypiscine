/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 11:48:51 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/14 19:38:18 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main()
{
	int		a;
	
	printf("Response on left\n");
	a =	ft_recursive_factorial(13);
	printf("%d  ", a);
	printf(" !13 = 0\n");
	a =	ft_recursive_factorial(12);
	printf("%d  ", a);
	printf(" !12= 479001600\n");
	a =	ft_recursive_factorial(3);
	printf("%d  ", a);
	printf(" !3= 6\n");
	a =	ft_recursive_factorial(1);
	printf("%d  ", a);
	printf("!1 = 1\n");
	a =	ft_recursive_factorial(0);
	printf("%d  ", a);
	printf(" !0= 1\n");
	a =	ft_recursive_factorial(-2);
	printf("%d  ", a);
	printf(" !-2= 0\n");
	return (0);
}
