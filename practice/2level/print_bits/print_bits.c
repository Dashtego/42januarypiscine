/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 10:34:14 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/27 15:08:38 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		putchar(char c)
{
	write(1, &c, 1);
}

void		print_bits(unsigned char octet)
{
	unsigned char	i;
	int				base;

	i = octet;
	base = 128;
	while (base >=1)
	{
		if (i / base == 0)
		{
			putchar('0');
			base /= 2;
		}
		else
		{
			putchar('1');
			i -= base;
			base /= 2;
		}
	}
}

int		main()
{
	unsigned char		a;

	a = 255;
	print_bits(a);
	return (0);
}


