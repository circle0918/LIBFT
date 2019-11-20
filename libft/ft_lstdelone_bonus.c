#include "libft.h"
/*#1. L’élement à free
#2. L’adresse de la fonction permettant de
supprimer le contenu de l’élement.
Libère la mémoire de l’élément passé en argument
en utilisant la fonction del puis avec free(3). La
mémoire de next ne doit pas être free. */

void	ft_del(void *content, size_t size)
{
	(void)size;
	free(content);
}

void ft_lstdelone(t_list *lst, void (*del)(void
                                               *))
{
    if (lst)
    {
        del(lst->content);
        free(lst);
        lst = NULL;
    }
}

void	ft_print_result(t_list *elem)
{
	int		len;

	len = 0;
	while (((char *)elem->content)[len])
		len++;
	write(1, elem->content, len);
}

int main()
{
    t_list *elem;
    t_list *elem2;
    t_list *elem3;
    t_list *elem4;
    char str[] = "lorem";
    char str2[] = "ipsum";
    char str3[] = "dolor";
    char str4[] = "sit";
    elem = ft_lstnew(str);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);
	if (!elem || !elem2 || !elem3 || !elem4)
		return (0);
	elem->next = elem2;
	elem2->next = elem3;
	elem3->next = elem4;
    printf("success init list ! elem4 cotent = %s\n", elem->next->next->next->content);
	
    if (1)
	{
		ft_lstdelone(&elem3, &ft_del);
		if (elem)
			ft_print_result(elem);
		else
			write(1, "NULL", 4);
		write(1, "\n", 1);
		if (elem2)
			ft_print_result(elem2);
		else
			write(1, "NULL", 4);
		write(1, "\n", 1);
		if (elem3)
			ft_print_result(elem3);
		else
			write(1, "NULL", 4);
		write(1, "\n", 1);
		if (elem4)
			ft_print_result(elem4);
		else
			write(1, "NULL", 4);
        write(1, "\n", 1);
	}
	return (0);
}