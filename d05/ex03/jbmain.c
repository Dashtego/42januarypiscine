/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 16:04:22 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/16 20:07:32 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <string.h> 

char	*ft_strcpy(char	*dest, char	*src);
void	ft_putstr(char *str);

int main (void)
{
	char strorig[] = "ABCDEFG";
//	char strft[] = "JKL";
	char strc[] = "JKL";

	int i;
	i = 0;

	printf("%s \n", strorig);

//	ft_strcpy(strft, strorig);
	strcpy(strc, strorig);

	printf("Source: %s\nLibrary: %s\n   Mine: %s", strorig, strc, strc);
}
