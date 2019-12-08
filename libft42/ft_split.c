/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:59:19 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 14:47:09 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_words(char const *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;
	if (s[i] != c)
		count++;
	while (s[++i] != '\0')
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
