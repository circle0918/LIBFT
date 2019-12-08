/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:04:41 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 15:01:24 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char *new;

	new = malloc((n + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	new = ft_strncpy(new, (char *)src, n);
	new[n] = '\0';
	return (new);
}
