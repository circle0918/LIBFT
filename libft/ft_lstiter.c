#include "libft.h"
#include <stdio.h>

/* #1 L’adresse du pointeur vers un élément.
 * #2. L’adresse de la fonction à appliquer.
 * Itère sur la list lst et applique la fonction f au
 * contenu chaque élément.*/
// void *(f)(t_list *content)
// {
//     char *s = content->content;
//    // printf("inside fp: %p\n",s);
//     printf("inside %s\n",(s));

//     s[0] = 'O';
//     s[1] = 'K';
// }

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list *tmp;
    t_list *new;

    if (!lst || !f)
        return;
    tmp = lst;
    while (tmp)
    {
        new = tmp->next;
        //printf("f : %s\n",tmp->content);
        //printf("fp: %p\n",tmp);
        f(tmp->content);
        //printf("b : %s\n",tmp->content);
        tmp = new;
    }
}

// int main()
// {
//     t_list *l1 = ft_lstnew(strdup("he"));
//     l1->next = ft_lstnew(strdup("llo"));
//     ft_lstiter(l1, (void *)ff);

//     //printf("%s", l1->content);
// }
