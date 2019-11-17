/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 14:50:18 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:47:42 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_atoi(const char *str)
{
    int neg;
    long int res;

    neg = 1;
    res = 0;
    while (ft_is_space(*str) == 1)
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
        if (res * neg < -2147483648)
            return (0);
        else if (res * neg > 2147483647)
            return (-1);
    }

    return (int)(res * neg);
}

/*int main(int ac, char **av)
{
    printf("%d", atoi(av[1]));
    return 0;
}
*/
