/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 23:03:33 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/17 12:14:10 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void) 
{
    char dest[6] = { 'H', 'E', 'L', 'L', 'O', '\0'};
    char src[7] = { 'S', 'O', 'U', 'R', 'C', 'E', '\0'};

    ft_strcpy(dest, src);
    printf("Dest: %s Src: %s", dest, src);

    return 0;
}
