/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 14:12:50 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/27 14:33:33 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int		a;
	int		b;
	int		large;
	int		small;
	int		temp;

	if (ac != 3)
	{
		printf("\n");
		return (0);
	}
	a = atoi(av[1]);
	b = atoi (av[2]);

	if (a == b)
	{
		printf("%d\n", a);
		return (0);
	}
	if ( a > b)
	{
		large = a;
		small = b;
	}
	else
	{
		small = a;
		large = b;
	}
	temp = small;
	while (temp > 1)
	{
		if (large % temp == 0 && small % temp == 0)
		{
			printf("%d\n", temp);
			return (0);
		}
		temp--;
	}
	printf("1\n");
	return (0);
}


