#include "libft.h"

/*Dernier élément de la liste*/

t_list *ft_lstlast(t_list *lst)
{
    t_list *new;

    if (!lst)
        return (NULL);
    new = lst;
    while (new->next)
    {
        new = new->next;
    }
    return (new);
}


// int main()
// {
//     char *p1 = "hello";
//     char *p2 = "word";
//     char *p3 = "worpd";

//     t_list *t1;
//     t_list *t2;
//     t_list *t3;
//     t1 = ft_lstnew(p1);
//     t2 = ft_lstnew(p2);
//     t3 = ft_lstnew(p3);
//     t1->next = t2;
//     t2->next = t3;
//     t_list *tp = ft_lstlast(t1);
//     printf("%s", tp->content);

//     return (0);
// }