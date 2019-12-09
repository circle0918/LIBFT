/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:55:43 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 14:39:04 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned	char	*ss1;
	unsigned	char	*ss2;
	size_t				i;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = n;
	if (i == 0)
		return (0);
	while ((*ss1 == *ss2) && i)
	{
		i--;
		if (i != 0)
		{
			ss1++;
			ss2++;
		}
	}
	return (*ss1 - *ss2);
}
