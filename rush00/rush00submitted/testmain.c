/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jroth <jroth@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 10:25:16 by jroth             #+#    #+#             */
/*   Updated: 2017/01/15 17:16:37 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	rush(int x, int y);

int		main(void)
{
	rush(5, 3);
	printf("\n");
	rush(5, 1);
	printf("\n");
	rush(1, 1);
	printf("\n");
	rush(1, 5);
	printf("\n");
	rush(4, 4);
	printf("\n");
	rush(0, 3);
	printf("\n");
	rush(3, 0);
	printf("\n");
	rush(-1, -1);

	return (0);
}
