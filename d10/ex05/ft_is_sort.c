/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 20:55:33 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/23 22:01:24 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;
	int		k;

	k = 0;
	i = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) <= 0)
			i++;
		else
			break ;
	}
	if (i == (length - 1))
		return (1);
	while (k < (length - 1))
	{
		if (f(tab[k], tab[k + 1]) >= 0)
			k++;
		else
			break ;
	}
	if (k == (length - 1))
		return (1);
	return (0);
}
