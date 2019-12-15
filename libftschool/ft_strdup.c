/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 17:44:59 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/14 18:07:56 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strcpy(char *d, char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}

char			*ft_strdup(const char *src)
{
	char	*new;
	size_t	l;

	l = ft_strlen(src) + 1;
	new = malloc(l * sizeof(char));
	if (new == NULL)
		return (NULL);
	else
		return (ft_strcpy(new, (char *)src));
}
