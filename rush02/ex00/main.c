/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erintala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 11:11:24 by erintala          #+#    #+#             */
/*   Updated: 2017/01/28 17:02:23 by erintala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft.h"

#define BUF_SIZE 10000

typedef struct	s_rushparse
{
	int x;
	int y;
	char *first;
	char *current;
}				t_rushparse;

int	linelen(char *str)
{
	int count;

	while (str[count] != '\n')
		count++;
	return (count);
}

int	main(int argc, char **argv)
{
	int ret;
	int ret2;
	int len;
	char buf[BUF_SIZE + 1];
	char *bufread;
	t_rushparse rush;
	rush.y = 0;
	
	while ((ret2 = read(0, buf, BUF_SIZE)))
	{
		buf[ret2] = 0;
	}
	
	printf("%s\n", buf);

	len = linelen(buf);
	bufread = (char *)malloc(sizeof(char) * len);
	while ((ret = read(0, bufread, len)))
	{
		printf("%i:", rush.y);
		if (rush.y == 0)
		{
			bufread[ret] = 0;
			rush.first = bufread;
			rush.y++;
		}
		else
		{
			bufread[ret] = 0;
			rush.current = bufread;
			rush.y++;
		//	printf("%s\n", rush.current);
		}
		printf("%s", rush.first);
	}
	if (ret == -1)
	{
		ft_putchar('\n');
		return (0);
	}
	return (0);
}
