/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 17:02:21 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/20 17:08:11 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot42(char *str);

int		main()
{
	char 	a;
	
	printf("helloHELLO");
	a = *ft_rot42("helloHELLO");
	printf("%s", *a);
	return (0);
}
