/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstrncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 19:21:33 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/20 01:04:36 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	src[] = "h";
	char	dest[] = "xaay";
	int		n;

	n = 2;
	printf("Source = %s \n", src);
	printf("Len = %d \n", n);
	printf("Original dest = %s \n", dest);
	strncpy(dest, src, n);
	printf("----\n");
	printf("New dest = %s \n", dest);
	return (0);
}
