/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 15:03:16 by imelvill          #+#    #+#             */
/*   Updated: 2017/02/02 18:32:29 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putspace()
{
	putchar(' ');
	putchar(' ');
	putchar(' ');
}

int		main(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac != 2 || !av[1])
	{
		putchar('\n');
		return (0);
	}
	
	if (av[1][i] == ' ' || av[1][i] == '\t')
	{
		while ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i] != '\0')
		{
			i++;
		}
	}
	while (av[1][i] != '\0')
	{
		if (av[1][i] == ' ' || av[1][i] == '\t')
		{
			while ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i] != '\0')
			{
				i++;
			}
			if(av[1][i] != '\0') 
			{
				putspace();
			}
		}
		if (av[1][i] != '\0')
		{
			putchar(av[1][i]);
			i++;
		}
	}
	putchar('\n');
}
