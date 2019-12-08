/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:54:42 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 14:35:30 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *new;

	new = (void *)malloc(sizeof(size_t) * size);
	if (new == NULL)
		return (NULL);
	ft_bzero(new, size);
	return ((void *)new);
}
