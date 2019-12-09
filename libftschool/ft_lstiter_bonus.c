/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 21:25:21 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 14:33:06 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *tmp;
	t_list *new;

	if (!lst || !f)
		return ;
	tmp = lst;
	while (tmp)
	{
		new = tmp->next;
		f(tmp->content);
		tmp = new;
	}
}
