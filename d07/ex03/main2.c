/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 21:32:38 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/19 21:42:12 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_concat_params(int argc, char **argv);

int		main(int argc, char **argv)
{
	char		a;
	 a = *ft_concat_params(argc, argv);
	 return (0);
}

