/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:55:15 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:55:18 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Search no more than N bytes of S for C.  */

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *src;
    size_t i;

    src = (unsigned char *)s;
    i = n;
    while (i)
    {
        if (*src == (unsigned char)c)
            return(src);
        src++;
        i--;
    }
    return NULL;
}

/*int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'y';
   char *ret;

   ret = ft_memchr(str, ch, 500);

   printf("%s", ret);

   return(0);
}*/
