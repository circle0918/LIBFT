/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:05:56 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 15:00:02 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_char_in_str(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char *front;
	char *back;

	if (!s1 || !set)
		return (0);
	front = (char *)s1;
	back = (char *)(front + ft_strlen(s1) - 1);
	while (*front)
	{
		if (!ft_char_in_str(*front, (char *)set))
			break ;
		front++;
		if (*front == '\0')
			return (ft_strdup(""));
	}
	while (*back)
	{
		if (!ft_char_in_str(*back, (char *)set))
			break ;
		back--;
	}
	return (ft_substr(s1, (front - s1), (back - front + 1)));
}
