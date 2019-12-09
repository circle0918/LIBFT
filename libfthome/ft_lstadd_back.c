#include "libft.h"

/*#1. L’adresse du pointeur vers le premier élément
de la liste.
#2. L’adresse du pointeur vers l’élément à rajouter
à la liste.
Ajoute l’élément new à la fin de la liste.*/

void ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list *tmp;

    if (alst && *alst)
    {
        tmp = ft_lstlast(*alst);
        tmp->next = new;
    }
    else
    *alst = new;
}

// void ft_lstadd_back(t_list **alst, t_list *new)
// {
//     t_list *lst;

//     lst = *alst;
//     if (lst)
//     {
//         while (lst)
//             lst = lst->next;
//         lst = new;
//     }
//     // else
//     //     *alst = new;
//     // t_list *a = ft_lstlast(*alst);
//     // a->next = new;
// }

// int main()
// {
//     char *p1 = "hello";
//     char *p2 = "word";
//     char *p3 = "ffkffword";
//     char *p4 = "111";

//     t_list *t1;
//     t_list *t2;
//     t_list *t3;
//     t_list *t4;
//     t1 = ft_lstnew(p1);
//     t2 = ft_lstnew(p2);
//     t3 = ft_lstnew(p3);
//     t4 = ft_lstnew(p4);
//       t1->next = t2;
//     t_list **alst;
//     alst = &t1;
//  //   printf("%p\t%p\n", *alst, t1);
//     ft_lstadd_back(alst, t3);
//     ft_lstadd_back(alst, t4);
//  //   printf("%p\t%p\n", t1->next, t2);
//     printf("%s", (*alst)->next->next->next->content);

//     return (0);
//     }
