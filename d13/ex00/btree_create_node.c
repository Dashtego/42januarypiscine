/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 14:19:25 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/26 18:36:25 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree		*new;

	new = (t_btree*)malloc(sizeof(t_btree));
	if (new)
	{
		new->item = item;
		new->left = 0;
		new->right = 0;
	}
	return (new);
}
