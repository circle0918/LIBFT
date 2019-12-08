/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:00:58 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 14:52:18 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
