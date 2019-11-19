#include "libft.h"

/*Dernier élément de la liste*/

/*t_list *ft_lstlast(t_list *lst)
{
    t_list *new;
    int len

        new = lst;
    len = ft_lstsize(lst);
    while (len - 1)
    {
        new = new->next;
        len--;
    }
    return (new);
}*/

int ft_lstsize(t_list *lst)
{
    t_list *new;

    new = lst;
    while (lst)
    {
        lst = lst->next;
        if (lst->next->next == NULL)
            return list->next;
        }
    }
}