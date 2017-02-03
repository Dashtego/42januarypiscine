/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 20:04:31 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/20 11:18:38 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*dest;

	i = 0;
	dest = (int*)malloc(sizeof(*dest) * (max - min));
	if (min > max)
	{
		range = NULL;
		return (0);
	}
	while ((i + min) < max)
	{
		dest[i] = min + i;
		i++;
	}
	*range = dest;
	return (i);
}
