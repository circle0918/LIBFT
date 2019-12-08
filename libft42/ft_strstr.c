/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:05:38 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 15:00:17 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	if (*s2 == '\0')
		return ((char *)s1);
	while (*s1 && *s2)
	{
		if (ft_strncmp((char *)s1, (char *)s2, ft_strlen(s2)) == 0)
		{
			return (char *)s1;
		}
		else
			s1++;
	}
	return (NULL);
}
