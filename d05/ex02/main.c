/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 10:27:24 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/20 00:54:15 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);

int		main()
{
	char	*a;
	int		result;

	a = "c4";
	result = ft_atoi(a);
	printf("%d", result);
	return (0);
}
