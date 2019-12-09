/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:04:56 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 14:56:46 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t lens2;

	lens2 = ft_strlen(s2);
	if (*s2 == '\0')
		return (char *)(s1);
	while (*s1 && *s2 && n-- >= lens2)
	{
		if (ft_strncmp(s1, s2, lens2) == 0)
		{
			return (char *)s1;
		}
		else
			s1++;
	}
	return (NULL);
}
