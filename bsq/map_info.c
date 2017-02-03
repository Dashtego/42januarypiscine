/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 15:57:21 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/30 23:23:32 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "bsqlib.h"
#include "libft.h"
#include <stdio.h>

char	*map_infos(char *str)
{
	char	*infos;
	int		i;
	int		j;

	j = 0;
	i = 0;
	infos = (char*)malloc(sizeof(infos) * 4);
	i = 0;
	while (str[i] != '\n')
	{
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		infos[j] = str[i];
		i++;
		j++;
	}
	infos[i] = '\0';
	return (infos);
}
