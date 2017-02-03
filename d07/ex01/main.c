/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:28:07 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/20 11:12:02 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main()
{
	int		min = -3;
	int		max = 5;
	int		*a;
	int		i;

	i = 0;
	a = ft_range(min, max);
	printf("Min value = %d\n", min);
	printf("Max value = %d\n", max);
	printf("Array = [");
	while (i < (max - min) && a > 0)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("]\n");
	if (a[i - 1] == (max - 1) && a > 0)
	{
		i = 0;
		if (a[i] == min)
		{
			printf("Correct!");
		}
	}
	return (0);
}
