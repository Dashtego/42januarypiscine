/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 20:17:33 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/19 23:38:30 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> //before gitadd
char	count_params(int argc, char **argv)
{
	int		x;
	int		y;
	int		z; 

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
	printf("String Length from count_params = %d\n", z);
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
	printf("Count after passing to main funct = %d\n", strsize);
	dest = (char*)malloc(sizeof(*dest) * (strsize + 1));
	if (strsize < 1)
		return (0);
	while (k < strsize)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			dest[k] = argv[i][j];
			printf("%c", dest[k]);
			j++;
			k++;
		}
		i++;
		dest[k] = '\n';
		printf("\n");
		k++;
	}
	dest[k] = '\0';
	argc = 1;
	return (dest);
}
