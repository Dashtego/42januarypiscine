/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 23:04:36 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/12 11:45:14 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	c;
	char	p;

	c = 'z';
	p = '\n';
	while (c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
	ft_putchar(p);
}
