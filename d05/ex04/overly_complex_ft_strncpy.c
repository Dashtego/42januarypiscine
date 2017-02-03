/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 10:02:06 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/17 11:29:08 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		scount;
	int		dcount;
	unsigned int		i;

	scount = 0;
	dcount = 0;
	i = 0;

	while (src[i] != '\0')
	{
		scount++;
	}
	while (dest[i] != '\0')
	{
		dcount++;
	}
	while (src[i] != '\0' || i != n)
	{
		dest[i] = src[i];
		i++;
	}
	if (scount < n)
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			i++;
		}
	return (0);
}


