/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:50:32 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 14:33:32 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t *new;

	new = malloc((count * size) * sizeof(char));
	if (new == NULL)
		return (NULL);
	ft_bzero(new, count * size);
	return (new);
}
