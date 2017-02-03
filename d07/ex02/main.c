/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:28:07 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/20 11:20:31 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main()
{
	int		min = -3;
	int		max = 5;
	int		a;
	int		*range;

	range = NULL;
	a = ft_ultimate_range(&range, min, max);
	printf("Min value = %d\n", min);
	printf("Max value = %d\n", max);
	printf("Range = %d\n", a);
	return (0);
}
