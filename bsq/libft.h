/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imelvill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 14:46:20 by imelvill          #+#    #+#             */
/*   Updated: 2017/01/29 21:58:12 by imelvill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

void				ft_putchar(char c);
void				ft_swap(int *a, int *b);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
int					ft_strcmp(char *s1, char *s2);
int					ft_atoi(char *str);
void				ft_putnbr(int nb);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strdup(char *src);
t_list				*ft_create_elem(void *data);
void				ft_list_push_back(t_list **begin_list, void *data);

#endif
