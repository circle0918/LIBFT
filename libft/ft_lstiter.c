#include "libft.h"

/* #1 L’adresse du pointeur vers un élément.
 * #2. L’adresse de la fonction à appliquer.
 * Itère sur la list lst et applique la fonction f au
 * contenu chaque élément.*/

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *tmp;

    tmp = lst;
    if (!lst || !f)
        return;
    while (tmp)
    {
        f(tmp);
        tmp = tmp->next;
    }
}