#include "libft.h"

/*Dernier élément de la liste*/

// t_list *ft_lstlast(t_list *lst)
// {
//     t_list *new;
//     int len;

//         new = lst;
//     len = ft_lstsize(lst);
//     while (len - 1)
//     {
//         new = new->next;
//         len--;
//     }
//     return (new);
// }

t_list *ft_lstlast(t_list *lst)
{
    t_list *new;

    new = lst;
    if (new->next == NULL)
        return (new);
    while (new)
    {
        if (new->next->next == NULL)
            return (new->next);
        new = new->next;
    }
}

// int main()
// {  
//     char *p1 = "hello";
//     char *p2 = "word";

//     t_list *t1;
//     t_list *t2;
//     t1 = ft_lstnew(p1);
//     t2 = ft_lstnew(p2);
//  //   t1->next = t2;
//     t_list *tp = ft_lstlast(t1);
//     printf("%s",tp->content);

//     return(0);
// }