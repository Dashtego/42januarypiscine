#include "ft_list.h"
#include <stdlib.h>
#include <unistd.h>

void		ft_list_push_back(t_list **begin_list, void *data);
t_list		*ft_create_elem(void *data);

void    ft_putstr(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}
t_list      *ft_create_elem(void *data)
{
    t_list  *temp;
    temp = malloc(sizeof(t_list));
    if (temp)
    {
        temp->data = data;
        temp->next = NULL;
    }
    return (temp);
}
void ft_print_list(t_list *list)
{
    while (list)
    {
        ft_putstr(list->data);
        list = list->next;
    }
}
int     main(void)
{
    t_list  *list;
    char    *s1;
    char    *s2;
    char    *s3;
    s1 = "toto ";
    s2 = "tutu ";
    s3 = "tata ";
    list = (t_list*)malloc(sizeof(t_list*));
    list = ft_create_elem(s1);
    ft_print_list(list);
    ft_putchar('\n');
    ft_list_push_back(&list, s2);
    ft_print_list(list);
    ft_putchar('\n');
    ft_list_push_back(&list, s3);
    ft_print_list(list);
    ft_putchar('\n');
    return (0);
}
