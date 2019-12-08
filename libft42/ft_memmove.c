/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:56:20 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 14:40:22 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned	char	*d;
	unsigned	char	*s;
	size_t				l;

	d = dst;
	s = (unsigned char *)src;
	l = len;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (d <= s)
	{
		while (l--)
			*d++ = *s++;
	}
	else
	{
		while (l--)
		{
			*(d + l) = *(s + l);
		}
	}
	return (dst);
}
