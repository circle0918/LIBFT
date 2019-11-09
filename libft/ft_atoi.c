/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 14:50:18 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/09 14:50:33 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int is_space(char c)
{
    return (c == ' ' || c == '\n' || c == '\t' ||
            c == '\v' || c == '\f' || c == '\r');
}
int ft_atoi(const char *str)
{
    int neg;
    int res;

    neg = 1;
    res = 0;
    while (is_space(*str) == 1)
        str++;
    if (*str == '-')
    {
        neg = -1;
        str++;
    }
    if (*str == '+')
        str++;
    while (*str && *str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - 48);
        str++;
    }
    return (res * neg);
}

/*int main(int ac, char **av)
{
    printf("%d", atoi(av[1]));
    return 0;
}
*/