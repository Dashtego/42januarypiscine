/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 23:04:36 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/13 15:33:52 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

char	ft_putchar(char i)
{
	write(1, &i, 1);
	return (0);
}

int		main()
{
	ft_print_alphabet();
	return (0);
}
