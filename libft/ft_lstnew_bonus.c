#include "libft.h"

/*Alloue (avec malloc(3)) et renvoie un nouvel
 *élément. la variable content est initialisée à
 *l’aide de la valeur du paramètre content. La
 *variable next est initialisée à NULL.*/


t_list *ft_lstnew(void *content)
{
    t_list *newlist;
    
    if (!(newlist = ((t_list *)malloc(sizeof(t_list)))))
        return (NULL);
        newlist->content = content;
        newlist->next = NULL;
    return (newlist);
}

// int main()
// {
//     t_list *t1;
//      int a = 10;
//      int b = 20;
//     char *p1 = "hello";
//     char *p2 = "word";
//     t1 = ft_lstnew(p1);
//  //   printf("%s",t1->content);
//      t_list *t2;
//     t2 = ft_lstnew(p2);
//          t1->next = t2;
//         //  printf("%p\n",t1);
//         //  printf("%p\n",t1->next);
//         //  printf("%p\n",t2);
//    // printf("%s",t1->next->content);
//    t_list *t3 =ft_lstnew(&b);
//    t2->next = t3;
//    printf("%d",*(int *)(t1->next->next->content));


//     return(0);
// }