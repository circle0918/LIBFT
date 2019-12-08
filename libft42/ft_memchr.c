/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:55:15 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 14:37:49 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned	char	*src;
	size_t				i;

	src = (unsigned char *)s;
	i = n;
	while (i)
	{
		if (*src == (unsigned char)c)
			return (src);
		src++;
		i--;
	}
	return (NULL);
}
