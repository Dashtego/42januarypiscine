/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 21:08:32 by imelvill          #+#    #+#             */
/*   Updated: 2017/02/01 21:53:28 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_m(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
	if (str[i] >= 'A' && str[i]<= 'Z')
		str[i] = 155 - str[i];
	if (str[i] >= 'a' && str[i]<= 'z')
		str[i] = 219 - str[i];
	write(1, &str[i], 1);
	i++;
	}}


int		main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	alpha_m(av[1]);
	return (0);
}
