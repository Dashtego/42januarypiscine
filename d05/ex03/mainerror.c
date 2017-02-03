/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 15:52:05 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/16 20:55:43 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str);
char    *ft_strcpy(char *dest, char *src);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main()
{
	char	dest[] = "xyz";
	
	ft_putstr("abcd");
	ft_putchar(' ');
	ft_putstr(dest);
	ft_putchar('\n');
	ft_strcpy(dest, "abcd");
	strcpy(dest, "abcd");
	ft_putstr(dest);
	return (0);
}
