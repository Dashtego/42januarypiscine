/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 09:16:00 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/12 10:33:22 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
