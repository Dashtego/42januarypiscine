/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 23:08:26 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/25 23:26:10 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list		*current;
	t_list		*next;
	t_list		*temp;


	current = begin_list;
	next = current->next;
	if (!cmp(current->data, data_ref))
	{
		*begin_list = current->next;
		free(current);
		current = next;
		


	while (current)
	{
		if (!cmp(current->data, data_ref))
		{
			current = current->next;
			prev = current;
			free(current);
		}
		current = list->next;
	}
	return (0);
}
