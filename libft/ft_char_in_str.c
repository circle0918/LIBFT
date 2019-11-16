/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_in_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:51:03 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:51:19 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_char_in_str(char c, char *str)
{
    while (*str)
    {
        if (*str == c)
            return (1);
        str++;
    }
    return (0);
}

/*int main(int ac, char **av)
{
    int i;

    i=ft_char_in_str('a',av[1]);
    printf("%d",i);
    return 0;
}*/
