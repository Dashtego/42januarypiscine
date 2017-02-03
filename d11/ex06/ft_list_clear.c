/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 15:43:03 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/25 18:40:54 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *list;
	t_list *temp;

	list = *begin_list;
	if (!list)
	{
		return ;
	}
	while (list->next)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
	*begin_list = 0;
}
