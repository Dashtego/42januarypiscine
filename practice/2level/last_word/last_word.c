/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 11:44:44 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/27 13:54:25 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	last_word(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			putchar('\n');
			return ;
		}
		putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)
	{
		putchar('\n');
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		i++;
	}
	if (i > 0)
		i--;
	while ((argv[1][i] == ' ' || argv[1][i] == '\t') && i > 0)
	{
		i--;
	}
	while (argv[1][i] != ' ' && argv[1][i] != '\t' && i > 0)
	{
		i--;
	}
	i++;
	last_word(&argv[1][i]);
	return (0);
}
