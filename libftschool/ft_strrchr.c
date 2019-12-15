/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:05:19 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 19:10:51 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char *tmp;
	unsigned char *save;

	tmp = (unsigned char *)s;
	save = NULL;
	if (c == '\0')
		return (ft_strchr(s, '\0'));
	while (*tmp)
	{
		if (*tmp == c)
			save = tmp;
		tmp++;
	}
	if (save == NULL)
		return (NULL);
	else
		return (char *)(save);
}
