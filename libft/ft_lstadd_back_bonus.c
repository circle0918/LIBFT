#include "libft.h"

/*#1. L’adresse du pointeur vers le premier élément
de la liste.
#2. L’adresse du pointeur vers l’élément à rajouter
à la liste.
Ajoute l’élément new à la fin de la liste.*/

void ft_lstadd_back(t_list **alst, t_list *new)
{

    // if (*alst)
    // {

    //     while ((*alst)->next != NULL)
    //     {
    //         *alst = (*alst)->next;
    //     }
    //     (*alst)->next = new;
    // }
    // else
    //     *alst = new;

     t_list *a = ft_lstlast(*alst);
     a->next = new;
}

int main()
{
    char *p1 = "hello";
    char *p2 = "word";

    t_list *t1;
    t_list *t2;
    t1 = ft_lstnew(p1);
    t2 = ft_lstnew(p2);
    //  t1->next = t2;
    t_list **alst;
    alst = &t1;
    printf("%p\t%p\n", *alst, t1);
    ft_lstadd_back(alst, t2);
    printf("%p\t%p\n", t1->next, t2);
    printf("%s", (*alst)->next->content);

    return (0);
}