/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 13:50:54 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/26 19:35:51 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
t_btree	*btree_create_node(void *item);
void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	ft_print_list(t_list *list)
{
	while (list)
	{
		ft_putchar('[');
		ft_putstr(list->data);
		ft_putchar(']');
		ft_putchar(' ');
		list = list->next;
	}
}

int		main()
{
	t_list	*list;
	t_list	*begin_list;

	list = ft_create_elem("2");
	begin_list = list;
	ft_list_push_front(&begin_list, "3");
	ft_list_push_front(&begin_list, "4");
	ft_print_list(begin_list);
	ft_putchar('\n');
	ft_list_reverse(&begin_list);
	ft_print_list(begin_list);
//	ft_print_list(ft_list_at(begin_list, 1));
/*	begin_list = ft_list_clear(&begin_list);
	ft_print_list(begin_list);
	printf("List size: %d", ft_list_size(begin_list));
	ft_putstr("Last element in list = ");
	ft_print_list(ft_list_last(begin_list));*/
	return (0);
}
