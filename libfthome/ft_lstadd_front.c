#include "libft.h"

/*#1. L’adresse du pointeur vers le premier élément
de la liste.
#2. L’adresse du pointeur vers l’élément à rajouter
à la liste.*/
/*Ajoute l’élément new au début de la liste*/

void ft_lstadd_front(t_list **alst, t_list *new)
{
    if (new)
    {
        new->next = *alst;
    }
    *alst = new;
}