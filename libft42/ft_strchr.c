/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:00:04 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 14:47:42 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char *tmp;

	tmp = s;
	while (*tmp)
	{
		if (*tmp == c)
			return (char*)(tmp);
		tmp++;
	}
	if (c == '\0')
		return (char*)(tmp);
	else
		return (NULL);
}
