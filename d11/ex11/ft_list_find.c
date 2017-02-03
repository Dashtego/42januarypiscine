/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 22:54:41 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/25 23:05:45 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list		*list;

	list = begin_list;
	while (list)
	{
		if (!cmp(list->data, data_ref))
		{
			return (list);
		}
		list = list->next;
	}
	return (0);
}
