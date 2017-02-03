/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 16:04:22 by jkalia            #+#    #+#             */
/*   Updated: 2017/01/17 22:27:09 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <string.h> 

void	ft_putstr(char *str);
char    *ft_strstr(char *str, char *to_find);

int main (void)
{
	char largestring[] = "hellos siri";
	char ft_smallstring[] = "si";
//	char libc_smallstring[] = "";

//	char *libc_ptr;
	char *ft_ptr;


	ft_ptr = ft_strstr(largestring, ft_smallstring);
//	libc_ptr = strstr(largestring, libc_smallstring);

	printf("Mine: %s", ft_ptr);
//	printf("Libc: %s\n", libc_ptr);
	//printf("Libc: %s\n", libc_ptr);
}
