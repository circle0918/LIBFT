/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:35:47 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/14 22:05:22 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*src;

	src = (char *)haystack;
	if (*needle == '\0')
		return (src);
	j = 0;
	while (j < len && src[j])
	{
		i = 0;
		while (src[j + i] == needle[i] && (j + i) < len)
		{
			if (needle[i + 1] == '\0')
				return (&src[j]);
			i++;
		}
		j++;
	}
	return (NULL);
}
