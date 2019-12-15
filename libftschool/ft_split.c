/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:59:19 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/14 22:36:18 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, char *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = src;
	d = dest;
	i = 0;
	while (s[i] != '\0' && i < n)
	{
		d[i] = s[i];
		i++;
	}
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
	return (d);
}

static char	*ft_strndup(const char *src, size_t n)
{
	char *new;

	new = malloc((n + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	new = ft_strncpy(new, (char *)src, n);
	new[n] = '\0';
	return (new);
}

static int	count_words(char const *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	if (s[i] != c)
		count++;
	while (s[0] != '\0' && s[++i] != '\0')
	{
		if (s[i] != c && s[i - 1] == c)
			count++;
	}
	return (count);
}

char		**ft_split(char const *s, char c)
{
	char	**new;
	int		k;
	int		j;
	int		i;

	i = 0;
	k = 0;
	if (!s || !c
	|| !(new = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			new[k] = ft_strndup(s + j, i - j);
			k++;
		}
	}
	new[k] = NULL;
	return (new);
}
