/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 22:37:06 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/24 23:23:06 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list		*list;

	list = begin_list;
	if (list)
	{
		while (list->next)
		{
			list = list->next;
		}
		return (list);
	}
	else
	{
		return (0);
	}
}
