/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:04:56 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:04:58 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t lenS2;

    lenS2 = ft_strlen(s2);
    if (*s2 == '\0')
        return (char *)(s1);
    while (*s1 && *s2 && n-- >= lenS2)
    {
        if (ft_strncmp((char *)s1, (char *)s2, lenS2) == 0) //memcmp
        {
            return (char *)s1;
        }
        else
            s1++;
    }
    return NULL;
}

/*int main(int ac, char **av)
{
    char m[] = "hello";
    char n[] = "el";
    char *mn;
    mn = ft_strnstr(m, n, 3);
    printf("%s", mn);
    return 0;
}*/
