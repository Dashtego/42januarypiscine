/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 15:22:23 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/20 01:08:50 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!*to_find)
		return (str);
	while (str[i] != to_find[j] || str[0] == to_find[0])
	{
		if (str[i] != to_find[j])
			i++;
		if (str[i] == to_find[j])
		{
			while (str[i] == to_find[j])
			{
				i++;
				j++;
				if (to_find[j] == '\0')
					return (*str[i - j]);
			}
		}
		j = 0;
	}
	return (0);
}
