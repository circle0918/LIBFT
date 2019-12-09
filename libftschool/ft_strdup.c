/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <apple@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:00:58 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/09 12:39:05 by apple            ###   ########.fr       */
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

char	*ft_strdup(const char *src)
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
