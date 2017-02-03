/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 23:24:15 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/12 12:55:13 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char i)
{
	write(1, &i, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	int		a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}

int		main(void)
{
	ft_print_numbers();
	return (0);
}
