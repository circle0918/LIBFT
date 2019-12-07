#include "libft.h"

/*#1. L’adresse du pointeur vers un élément.
#2. L’adresse de la fonction à appliquer.
Itère sur la liste lst et applique la fonction f au
contenu de chaque élément. Crée une nouvelle liste
résultant des applications successives de f. la
fonction del est la pour detruire le contenu d un
element si necessaire*/

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list *tmp;
  t_list *result;

  if (!f || !lst || !del || !(result = ft_lstnew(f(lst->content))))
    return (NULL);
  lst = lst->next;
  tmp = result;
  while(lst)
  {
    if(!(tmp->next=ft_lstnew(f(lst->content))))
    {
      ft_lstclear(&result,del);
      return(NULL);
    }
    tmp = tmp->next;
    lst = lst->next;
  }
  return (result);
}