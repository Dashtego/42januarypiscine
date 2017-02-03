/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 13:50:54 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/25 11:36:22 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list		*ft_create_elem(void *data);
void	ft_list_push_back(t_list **begin_list, void *data);
void	ft_putchar(char c);
void	ft_putstr(char *str);

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
	t_list	**begin_list;

	list = ft_create_elem("2");
	begin_list = &list;
	ft_list_push_back(begin_list, "3");
	ft_list_push_back(begin_list, "5");
	ft_list_push_back(begin_list, "6");
	ft_print_list(list);
	return (0);
}
