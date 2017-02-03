/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 14:52:27 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/12 10:32:20 by imelvill         ###   ########.fr       */
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
	char	c;
	char	p;

	c = 'a';
	p = '\n';
	while (c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
	ft_putchar(p);
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
