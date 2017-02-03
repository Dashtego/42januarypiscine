/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 09:51:05 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/13 12:36:51 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

int     main(void)
{
	    ft_print_alphabet();
		    return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
