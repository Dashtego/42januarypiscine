/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 10:49:07 by jrodrigu          #+#    #+#             */
/*   Updated: 2017/01/31 02:46:07 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
#include "bsqlib.h"

int leng(char *str)
{
	int		i;
	int		fd;
	char	buf[1];

	i = 0;
	fd = open(str, O_RDONLY, S_IRUSR);
	while (read(fd, buf, 1))
	{
		i++;
	}
	close(fd);
	return (i + 1);
}

char	*open_file(char *argv)
{
	int		fd;
	int		i;
	char	*temp;
	char	buf[1];

	i = 0;
	temp = (char*)malloc(sizeof(temp) * leng(argv));
	fd = open(argv, O_RDONLY, S_IRUSR);
	while (read(fd, buf, 1))
	{
		temp[i] = buf[0];
		i++;
	}
	temp[i] = '\0';
	close(fd);
	return (temp);
}
