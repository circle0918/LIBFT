/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <yyuan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 14:50:18 by yyuan             #+#    #+#             */
/*   Updated: 2019/12/08 17:44:14 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t' ||
			c == '\v' || c == '\f' || c == '\r');
}

static	int	return_res(const char *s, int neg, long int res)
{
	int count;

	count = 0;
	while (s[count] && s[count] >= '0' && s[count] <= '9')
	{
		count++;
	}
	if (count >= 20 && neg == 1)
		return (-1);
	else if (count >= 20 && neg == -1)
		return (0);
	else
		return (neg * res);
}

int			ft_atoi(const char *str)
{
	long	int		res;
	int				neg;
	const	char	*s;

	neg = 1;
	res = 0;
	while (ft_is_space(*str) == 1)
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
		if (*str < '0' || *str > '9')
			return (0);
	}
	if (*str == '+')
		str++;
	s = str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		str++;
	}
	return (int)(return_res(s, neg, res));
}
