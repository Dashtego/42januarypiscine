/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 12:49:07 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/24 20:33:19 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list		*temp;

	temp = (t_list*)malloc(sizeof(t_list));
	if (temp)
	{
		temp->data = data;
		temp->next = 0;
	}
	return (temp);
}
