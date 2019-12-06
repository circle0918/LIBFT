#include "libft.h"

/* #1 L’adresse du pointeur vers un élément.
 * #2. L’adresse de la fonction à appliquer.
 * Itère sur la list lst et applique la fonction f au
 * contenu chaque élément.*/

// void *(f)(void *content)
// {
//     char *s = content;

//     s[0] = 'O';
//     s[1] = 'K';
// }

// void ft_lstiter(t_list *lst, void (*f)(void *))
// {
//     t_list *tmp;
//   //  t_list *new;

//     if (!lst || !f)
//         return;
//     tmp = lst;
//     while (tmp)
//     {
//         new = tmp->next;
//         f(tmp);
//         tmp = new;
//     }
// }

// int main()
// {
//     t_list *l1 = ft_lstnew(strdup("he"));
//     l1->next = ft_lstnew(strdup("llo"));
//     ft_lstiter(l1, f);

//     printf("%s", l1->next->content);
// }