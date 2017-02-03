/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rushident00.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 16:20:11 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/29 16:46:28 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_rushident00(int x, int y, char *str)
{
	int		i;
	int		j;
	char	top[3]={'o', '-', 'o'};
	int		a;
	int		b;

	a = x;
	b = y;
	i = 0;
	j = 0;
	if (str[i] == top[j])
	{
		i++;
		j++;
		if (str[i] == '\n')
			return (1);
	}
	else
	{
		return (0);
	}
	if (x == 2 && (str[i] == top[2]))
		return (1);
	while (str[i] == top[j] && i < (x - 1))
	{
		i++
	}
	i++;
	j++;
	if (str[i] == top[j])
	{
		i++;
		j++;
		if (str[i] == '\n')
			return (1);
	}
	return (0);
}

	

