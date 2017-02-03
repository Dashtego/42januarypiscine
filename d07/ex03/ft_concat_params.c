/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 20:17:33 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/20 14:15:42 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	count_params(int argc, char **argv)
{
	int		x; //numbers of characters in word
	int		y; //number of words
	int		z; //total number of characters

	z = 0;
	y = 1;
	while (y < argc)
	{
		x = 0;
		while (argv[y][x] != '\0')
			x++;
		y++;
	if (y == argc)
		z--;
	z += (x+1);
	}
	return (z);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		strsize;
	char	*dest;

	i = 1;
	k = 0;
	j = 0;
	strsize = count_params(argc, argv);
	dest = (char*)malloc(sizeof(*dest) * (strsize + 1));
	if (strsize < 1)
		return (0);
	while (k < strsize)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			dest[k] = argv[i][j];
			j++;
			k++;
		}
		i++;
		dest[k] = '\n';
		k++;
	}
	dest[k] = '\0';
	argc = 1;
	return (dest);
}
