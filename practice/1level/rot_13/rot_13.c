/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 01:09:56 by imelvill          #+#    #+#             */
/*   Updated: 2017/02/01 02:05:32 by imelvill         ###   ########.fr       */
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

char	*rawt(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'm')
			str[i++] += 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i++] -= 13;
		else if (str[i] >= 'A' && str[i] <= 'M')
			str[i++] += 13;
		else if (str[i] >= 'N' && str[i] <= 'Z')
			str[i++] -= 13;
		else
			i++;
	}
	return (str);
}






int		main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '\0')
	{
		ft_putchar('\n');
		return (0);
	}

	ft_putstr(rawt(av[1]));
	return (0);
}
