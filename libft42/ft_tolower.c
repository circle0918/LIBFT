/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:06:23 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 14:58:06 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isupper(int c)
{
	int t;

	t = 'A';
	while (t <= 'Z')
	{
		if (t == c)
			return (1);
		t++;
	}
	return (0);
}

int			ft_tolower(int c)
{
	if (ft_isupper(c) == 1)
	{
		c += 32;
	}
	return (c);
}
