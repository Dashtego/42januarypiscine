/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 22:13:28 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/13 15:47:29 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main()
{
	int		x;
	int		*nbr1;
	int		**nbr2;
	int		***nbr3;
	int		****nbr4;
	int		*****nbr5;
	int		******nbr6;
	int		*******nbr7;
	int		********nbr8;
	int		*********nbr9;
	x = 11;
	nbr1 = &x;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	printf("%d\n", x);
	ft_ultimate_ft(nbr9);	
	printf("%d", x);
	return (0);
}
