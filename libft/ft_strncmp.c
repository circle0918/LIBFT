/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:03:58 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:04:00 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *ss1;
	unsigned char *ss2;

	ss1=(unsigned char*)s1;
	ss2=(unsigned char*)s2;
	if (n == 0)
		return (0);
	while (*ss1 && *ss2 && *ss1 == *ss2 && n - 1)
	{
		ss1++;
		ss2++;
		n--;
	}
	return (*ss1 - *ss2);
}
