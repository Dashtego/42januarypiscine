/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 13:50:54 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/25 16:57:26 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

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
	ft_print_list(begin_list);
	ft_putchar('\n');
	begin_list = ft_list_clear(&begin_list);
	ft_print_list(begin_list);
//	printf("List size: %d", ft_list_size(begin_list));
//	ft_putstr("Last element in list = ");
//	ft_print_list(ft_list_last(begin_list));
	return (0);
}
