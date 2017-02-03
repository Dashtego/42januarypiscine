/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_array.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 00:04:45 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/29 00:55:02 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src);

char	**p_array(char *str)
{
	char	**arr = 0;
	char	*src;
	int		i;
	int		j;

	i = 0;
	j = 0;

	src = ft_strdup(str);
	while (src[i] != '\0')
	{
		if (src[i] == '\n')
		{
			src[i] = '\0';
			arr[j] = ft_strdup(src);
			j++;
		}
		i++;
	}
	return (arr);
}

int		main()
{
	char	**arr;

	arr = p_array("hello\nworld\n\0");
	ft_putstr(arr[0]);
	ft_putchar('\n');
	ft_putstr(arr[1]);
	return (0);
}

