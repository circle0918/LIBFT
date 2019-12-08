#include "libft.h"

/*#1. L’adresse du pointeur vers un élément.
#2. L’adresse de la fonction à appliquer.
Itère sur la liste lst et applique la fonction f au
contenu de chaque élément. Crée une nouvelle liste
résultant des applications successives de f. la
fonction del est la pour detruire le contenu d un
element si necessaire*/

static t_list	*ft_lstnewone(void *content)
{
	t_list *new;

	if (!(new = malloc(sizeof(t_list))))
		return (0);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *begin;
	t_list *new;
	t_list *tmp;

	if (lst == NULL || (*f) == NULL)
		return (NULL);
	if (!(new = ft_lstnewone((*f)(lst->content))))
		return (0);
	lst = lst->next;
	begin = new;
	tmp = new;
	while (lst)
	{
		if (!(new = ft_lstnewone((*f)(lst->content))))
		{
			ft_lstclear(&begin, (*del));
			return (0);
		}
		tmp->next = new;
		tmp = new;
		lst = lst->next;
	}
	return (begin);
}
