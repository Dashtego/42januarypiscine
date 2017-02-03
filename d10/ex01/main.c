/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 13:59:57 by jle-quel          #+#    #+#             */
/*   Updated: 2017/01/23 20:06:07 by imelvill         ###   ########.fr       */
/*   Updated: 2017/01/23 17:12:39 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int));

void	ft_putnbr(int n)
{
	printf("%d", n);
}

int		main(void)
{
	int		tab[3] = { 1, 2, 3 };

	ft_foreach(tab, 3, ft_putnbr);
	//test;
	return (0);
}

