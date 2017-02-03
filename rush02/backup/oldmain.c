/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrayrush.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:38:40 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/29 11:11:05 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

#define BUF_SIZE 10000

void	ft_putchar(char c);

int	xcount(char *str)
{
	int count = 0;

	while (str[count] != '\n')
		count++;
	return (count);
}

int		ycount(char *str)
{
	int		i = 0;
	int		y = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			y++;
		}
		i++;
	}
	return (y);
}

void	rushident(int x, int y, char *buf)
{
	if (!strcmp(rush00str(x, y), buf))
		printf("[rush00] [%i] [%i] ", x, y);
//	else if (!strcmp(rush01str(x, y), buf))
		printf("[rush01] [%i] [%i] ", x, y);
//	else if (!strcmp(rush02str(x, y), buf))
		printf("[rush02] [%i] [%i] ", x, y)
//	else if (!strcmp(rush03str(x, y), buf))
	{
//		printf("[rush03] [%i] [%i] ", x, y);
	}
//	else if (!strcmp(rush04str(x, y), buf))
	{
//		printf("[rush04] [%i] [%i] ", x, y);
	}
	else
	{
		printf("invalid string");
}

void	

int		main()
{
	int ret;
	int 	x = 0;
	int		y = 0;
	char buf[BUF_SIZE + 1];

	while ((ret = read(0, buf, BUF_SIZE)))
	{
		buf[ret] = 0;
	}
	x = xcount(buf);
	y = ycount(buf);
	rushident(x, y, buf)

	printf("%d ", len);
	printf("%d", ycount(buf));
	return (0);
}
