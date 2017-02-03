/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 09:24:03 by jle-quel          #+#    #+#             */
/*   Updated: 2017/01/20 17:20:58 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot42(char *str);

int		main(void)
{
	char	*result;
	char	*value;

	value = "hellohduello";
	result = ft_rot42(value);
	printf("%s", result);
	return (0);
}
