/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 19:49:04 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/13 20:07:15 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main()
{
	int		a;
	int		b;

	a = 1;
	b = 2;
	printf("%d%d", a, b);
	ft_swap(&a, &b);
	printf("%d%d", a, b);
	return (0);
}
