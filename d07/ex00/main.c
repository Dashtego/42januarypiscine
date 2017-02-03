/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 23:39:11 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/19 14:39:00 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int		main()
{
	char	a[] = "hi jorge, good morning";
	printf("Source is %s\n", a);
	printf("Destination is %s", ft_strdup(a));
	return (0);
}
