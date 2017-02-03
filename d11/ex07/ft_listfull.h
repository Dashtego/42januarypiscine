/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 12:43:56 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/25 19:54:30 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list		*ft_create_elem(void *data);
t_list		*ft_list_last(t_list *begin_list);
t_list		*ft_list_push_params(int ac, char **av);
t_list		*ft_list_at(t_list *begin_list, unsigned int nbr);
int			ft_list_size(t_list *begin_list);
void		ft_list_push_front(t_list **begin_list, void *data);
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_list_push_back(t_list **begin_list, void *data);
#endif
