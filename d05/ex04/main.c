/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 20:55:56 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/17 20:29:32 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char	src[] = "abc";
	char	dest[] = "chararray";
	int		n;

	n = 3;
	printf("Source = %s \n", src);
	printf("Len = %d \n", n);
	printf("Original dest = %s \n", dest);
	ft_strncpy(dest, src, n);
	printf("----\n");
	printf("New dest = %s \n", dest);
	return (0);
}
