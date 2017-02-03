/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:01:50 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/23 19:20:35 by jle-quel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_map(int *tab, int length, int (*f)(int));

int		ft_increment(int n)
{
	return (n + 1);

}

int		main(void)
{
	int *res;
	int tab[3] = { 5, 3, 5 };
	int	i = 0;

	res = ft_map(tab, 3, &ft_increment);
	while (i < 3)
	{
		printf("%d", *res++);
		i++;
	}
	return (0);
}
