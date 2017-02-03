/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 15:28:24 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/14 19:39:47 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb > 0 && nb < 13)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
	return (0);
}
