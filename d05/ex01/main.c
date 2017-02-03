/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 20:49:01 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/20 00:53:33 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_putnbr(int nb);

int		main()
{
	printf("Function result = Expected Result");
	printf("\n");
	ft_putnbr(-2147483648);
	printf(" = -2147483648");
	printf("\n");
	ft_putnbr(0);
	printf(" = 0");
	printf("\n");
	ft_putnbr(1);
	printf(" = 1");
	printf("\n");
	ft_putnbr("c2");
	printf(" = 42");
	printf("\n");
	ft_putnbr(  54321);
	printf(" = 54321");
	printf("\n");
	return (0);
}
