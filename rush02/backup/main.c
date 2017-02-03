/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 23:34:57 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/29 20:31:30 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

#define BUF_SIZE 100

void	ft_putchar(char c);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);

int		xcount(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\n')
		count++;
	return (count);
}

int		ycount(char *str)
{
	int		i;
	int		y;

	i = 0;
	y = 0;
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
	if (!ft_strcmp(rush00(x, y), buf))
		ft_putstr("[rush00]");
	if (!ft_strcmp(rush01(x, y), buf))
		ft_putstr("[rush01]");
	if (!ft_strcmp(rush02(x, y), buf))
		ft_putstr("[rush02]");
	if (!ft_strcmp(rush03(x, y), buf))
		ft_putstr("[rush03]");
	if (!ft_strcmp(rush04(x, y), buf))
		ft_putstr("[rush04]");
}

void	printxy(int x, int y)
{
	ft_putchar('[');
	ft_putnbr(x);
	ft_putchar(']');
	ft_putchar(' ');
	ft_putchar('[');
	ft_putnbr(y);
	ft_putchar(']');
}

char        *create_line(char *line, char *str)
{
   char    *tmp;
   int     i;
   int     ln;

   ln = ft_strlen(line) + ft_strlen(str);
   tmp = (char*)malloc(sizeof(*tmp) * (ln + 1));
   if (tmp)
   {
       i = 0;
       while (line[i] != '\0')
       {
           tmp[i] = line[i];
           ++i;
       }
       while (*str != '\0')
       {
           tmp[i] = *str++;
           ++i;
       }
       tmp[i] = '\0';
   }
   free(line);
   return (tmp);
}
int         main()
{
	char    *str;
	char    buf[BUF_SIZE + 1];
	int     size;
	
	str = (char*)malloc(sizeof(*str));
	*str = '\0';
	while ((size = read(0, buf, BUF_SIZE)))
	{
		buf[size] = '\0';
		str = create_line(str, buf);
	}
	rushident(xcount(buf), ycount(buf), buf);
	printxy(xcount(buf), ycount(buf));
	return (0);
}
