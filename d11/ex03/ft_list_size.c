/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 22:13:17 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/24 22:34:34 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int			count;
	t_list		*list;

	list = begin_list;
	count = 0;
	while (list)
	{
		list = list->next;
		count++;
	}
	return (count);
}
