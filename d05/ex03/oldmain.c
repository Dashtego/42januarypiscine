/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 20:55:56 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/16 23:25:23 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);
void	ft_putstr(char *str);

int		main(void)
{
	char	src[] = "hello";
	char	dest[] = "goodbye";
	char	i;

	printf("Source = %s \n", src);

//	i = *ft_strcpy(dest, src);
	printf("%c", i);
	strcpy(dest, src);
	printf("----\n");
	printf("Destination = %s \n", dest);
	return (0);
}
