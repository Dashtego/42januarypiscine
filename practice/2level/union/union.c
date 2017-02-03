/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 20:03:47 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/31 21:46:11 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ck1(char *s1, char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printsecond(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	ck1(s1, s2[0]);
	while (s2[i] != '\0')
	{
		while (s2[i] != s2[i - j])
		{
			j++;
			if ((i - j) < 0) //reaches end of s2 without dupes
			{
				ck1(s1, s2[i]);
				j = 1;
				break; 
			}
		}
		j = 1;
		i++;
	}
}

void	ck1(char *s1, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (c != s1[i])
	{
		if (s1[i] == '\0')
		{
			ft_putchar(c);
			return ;
		}
		i++;
	}
}

void	printfirst(char *s1)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	ft_putchar(s1[0]);
	while (s1[i] != '\0')
	{
		while (s1[i] != s1[i - j])
		{
			j++;
			if (!s1[i - j])
			{
				ft_putchar(s1[i]);
				j = 1;
				break ;
			}
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	printfirst(av[1]);
	printsecond(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}


