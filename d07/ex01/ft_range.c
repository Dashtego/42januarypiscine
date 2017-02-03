/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 14:56:31 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/19 16:44:10 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*dest;

	if (min >= max)
		return (0);
	dest = (int*)malloc(sizeof(min) * ((max - min) + 1));
	i = 0;
	while ((i + min) < max)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
