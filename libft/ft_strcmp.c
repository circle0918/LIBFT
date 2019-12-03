/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:00:26 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:00:32 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
    unsigned char *ss1;
    unsigned char *ss2;

    ss1= (unsigned char*)s1;
    ss2= (unsigned char*)s2;
    while (*ss1 && *ss2 && *ss1 == *ss2)
    {
        ss1++;
        ss2++;
    }
    return (*ss1 - *ss2);
}

// int main(void)
// {
//     printf("%d\n",ft_strcmp("test\200", "test\0"));
//       printf("%d\n",strcmp("test\200", "test\0"));
//     return (0);
// }
