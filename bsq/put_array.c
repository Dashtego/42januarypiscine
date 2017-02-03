/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 19:52:47 by jrodrigu          #+#    #+#             */
/*   Updated: 2017/01/31 04:36:29 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	put_char_da(char **str, int height)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (height > j)
	{
		ft_putchar(str[j][i]);
		if (str[j][i] == '\0')
		{
			ft_putchar('\n');
			j++;
			i = 0;
		}
		else
			i++;
	}
}

void	put_int_da(int **str, int height, int length)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (height > j)
	{
		ft_putnbr(str[j][i]);
		if (i > length - 2)
		{
			ft_putchar('\n');
			j++;
			i = 0;
		}
		else
			i++;
	}
}
