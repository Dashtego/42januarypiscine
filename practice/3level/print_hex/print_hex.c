/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 15:30:46 by imelvill          #+#    #+#             */
/*   Updated: 2017/02/02 16:12:43 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int		i;
	int		nb;
	int		sign;

	sign = 1;
	i = 0;
	nb = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i] != 0)
	{
		nb = nb * 10 + str[i] -'0';
		i++;
	}
	return (nb * sign);
}



/*void	print_hex(int	nb)
{
}
*/
int		main(int ac, char **av)
{
	int		nb;

	if (ac != 2 || av[1][0] == '\0')
	{
		ft_putchar('\n');
		return (0);
	}
	nb = ft_atoi(av[1]);
	printf("%d", nb);
	return (0);
}


