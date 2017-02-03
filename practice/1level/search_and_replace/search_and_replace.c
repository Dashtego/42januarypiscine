/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 22:19:18 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/26 23:39:13 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


int		main(int ac, char **av)
{
	int		i;
	int		j;
	int		found;

	found = 0;
	i = 0;
	j = 0;
	if (ac != 4)
	{
		ft_putchar('\n');
		return (0);
	}
	while (av[1][i] != '\0')
	{
		while (av[1][i] == av[2][j]) //finding ref data
		{
			i++;
			j++;
			if (av[2][j] == '\0') //if ref data found
			{
				i = i - j;
				j = 0;
				found++;
				while (av[3][j] != '\0')
				{
					av[1][i] = av[3][j];
					i++;
					j++;
				}
			}
			else
			{
				j = 0;
			}
		}
		i++;
	}
	if (found == 0)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_putstr(av[1]);
	}
}



