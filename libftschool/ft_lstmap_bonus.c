/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 21:25:59 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 17:47:31 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_alstnew(void *content)
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
	t_list *start;
	t_list *new;
	t_list *tmp;

	if (lst == NULL || (*f) == NULL)
		return (NULL);
	if (!(new = ft_alstnew((*f)(lst->content))))
		return (NULL);
	lst = lst->next;
	start = new;
	tmp = new;
	while (lst)
	{
		if (!(new = ft_alstnew((*f)(lst->content))))
		{
			ft_lstclear(&start, (*del));
			return (0);
		}
		tmp->next = new;
		tmp = new;
		lst = lst->next;
	}
	return (start);
}
