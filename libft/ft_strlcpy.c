/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:02:59 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:03:01 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t srclen;

    srclen = ft_strlen(src);
    if (size == 0)
        return (0);
    if (srclen < size - 1)
        ft_memcpy(dst, src, srclen + 1);
    else
        {
            ft_memcpy(dst, src, size - 1);
            dst[size-1]='\0';
        }
    return (srclen);
}
/*int main ()
{
    char *d="hello";
    char *s="word";
    char *d1="hello";
    char *s1="word";
    printf("%lu",strlcpy(d,s,0));
    printf("%zu",ft_strlcpy(d1,s1,0));
    return 0;
}*/
