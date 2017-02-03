/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 14:22:29 by imelvill          #+#    #+#             */
/*   Updated: 2017/02/02 13:28:51 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
//void	reverse_bits(unsigned char octet)
//{


void	print_bits(unsigned char octet)
{
	unsigned char	i;
	int		base;

	i = octet;
	base = 128;

	while (base >= 1)
	{
		if (i / base == 0)
		{
			ft_putchar('0');
		}
		else
		{
			ft_putchar('1');
			i -= base;
		}
		base /= 2;
	}
}

unsigned char	rev_bits(unsigned char octet)
{
	unsigned char	c;
	unsigned char	res;
	int		i = 0;

	c = octet;
	res = 0;
	while (i < 8)
	{
		res = res * 2 + c % 2;
		c /= 2;
		i++;
	}
	return (res);
}

int		main()
{
	unsigned char octet;
	unsigned char a;


	octet = 12;
	print_bits(octet);
	printf("\n");
	a = rev_bits(12);
	print_bits(a);
//	printf("reverse = ");
//	reverse_bits(octet);
	printf("\n");
	printf("%d", a);
	printf("\n");
	return (0);
}
