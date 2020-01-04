/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:54:26 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 15:17:13 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_size(int n)
{
	unsigned	int	nbr;
	int				count;
	int				f;
	int				len;

	f = 0;
	len = 0;
	if (n < 0)
	{
		f = 1;
		nbr = n * (-1);
	}
	else
		nbr = n;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	count = f + len + 1;
	return (count);
}

char		*ft_itoa(int n)
{
	unsigned	int	nb;
	int				num;
	int				len;
	char			*new;

	num = n;
	if (num == 0)
		return (ft_strdup("0"));
	len = count_size(n);
	if (!(new = (char *)malloc(len * sizeof(char))))
		return (NULL);

	if (num < 0)
	{
		new[0] = '-';
		nb = num * -1;
	}
	else
		nb = num;
	new[len - 1] = '\0';
	while (nb)
	{
		new[len-- - 2] = nb % 10 + '0';
		nb /= 10;
	}
	return (new);
}
