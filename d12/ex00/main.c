/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 11:17:59 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/26 12:13:23 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		main(argc, **argv)
{
	if (argc <= 1)
	{
		ft_putstr("File name missing.");
	}
	if (argc >= 3)
	{
		ft_putstr("Too many arguments.");
	}

