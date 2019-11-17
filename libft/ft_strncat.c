/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:03:44 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:03:46 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
    char *tmp;

    tmp = s1;
    while (*tmp)
        tmp++;
    while (n && *s2)
    {
        *tmp = *s2;
        s2++;
        tmp++;
        n--;
    }
    *tmp = '\0';
    return (s1);
}

/*int main(int ac, char**av)
{
   char *str = "the cake is a lie !\0I'm hidden lol\r\n";
        char buff1[0xF00] = "there is no stars in the sky";
        char buff2[0xF00] = "there is no stars in the sky";
        size_t max = 5;
 printf("wode %s\n",ft_strncat(buff2,str,5));
 printf("biao %s\n",strncat(buff1,str,5));
    return 0;
}*/
