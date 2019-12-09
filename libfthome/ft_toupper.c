/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:06:34 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:06:36 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int ft_islower(int c)
{
    int t;

    t = 'a';
    while (t <= 'z')
    {
        if (t == c)
            return (1);
        t++;
    }
    return (0);
}

int ft_toupper(int c)
{
    if (ft_islower(c) == 1)
    {
        c -= 32;
    }
    return (c);
}

/*int main()
{
    printf("%c",ft_toupper('0'));
    return 0;
}*/
