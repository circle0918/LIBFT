#include "libft.h"

/*#1. L’adresse du pointeur vers un élément.
#2. L’adresse de la fonction à appliquer.
Itère sur la liste lst et applique la fonction f au
contenu de chaque élément. Crée une nouvelle liste
résultant des applications successives de f. la
fonction del est la pour detruire le contenu d un
element si necessaire*/

// t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
//                   void (*del)(void *))
// {
//     t_list *new;
//     t_list *tmp;

//     tmp = lst;
//     if (!new = ft_lstnew(tmp->content) || !f || !del)
//         return (NULL);
//     while (tmp)
//     {
//     }
//     return (new);
// }

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *cursor;
    t_list *next_node;
    t_list *new_lst;
    t_list *alst;

    if (lst && f)
    {
        cursor = lst;
        if (!(new_lst = ft_lstnew(cursor->content)))
            return (NULL);
        alst = new_lst;
        while (cursor)
        {
            f(cursor);
            next_node = cursor->next;
            if (!(new_lst->next = ft_lstnew(next_node->content)))
                return (NULL);
            if (del)
                ft_lstdelone(cursor, del);
            cursor = next_node;
            new_lst = new_lst->next;
        }
        return (alst);
    }
    return (NULL);
}