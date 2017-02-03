/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 18:21:12 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/26 18:39:19 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdio.h>

t_btree *btree_create_node(void *item);


int		main()
{
	t_btree		*temp;
	char		a;

	a = 'b';
	temp = btree_create_node(&a);
	printf("%c", *(char*)(temp->item));
	return (0);
}

