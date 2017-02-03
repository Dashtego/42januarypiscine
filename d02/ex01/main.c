/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 23:04:36 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/11 23:10:04 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char i)
{
	write(1, &i, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	int		n;
	int		i;
	char	c;
	char	p;

	n = 26;
	i = 0;
	c = 'z';
	p = '\n';
	while (i < n)
	{
		ft_putchar(c);
		i++;
		c--;
	}
	ft_putchar(p);
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
