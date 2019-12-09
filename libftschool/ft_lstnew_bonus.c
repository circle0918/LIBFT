/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 21:26:12 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 14:34:44 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *newlist;

	if (!(newlist = ((t_list *)malloc(sizeof(t_list)))))
		return (NULL);
	newlist->content = content;
	newlist->next = NULL;
	return (newlist);
}
