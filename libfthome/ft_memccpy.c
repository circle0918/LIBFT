/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:54:59 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:55:01 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copy no more than N bytes of SRC to DEST, stopping when C is found.
   Return the position in DEST one byte past where C was copied, or
   NULL if C was not found in the first N bytes of SRC.  */

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = dst;
    s = (unsigned char *)src;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
    while (n)
    {
        *d = *s;
        if (*s == (unsigned char)c)
            return (d + 1);
        d++;
        s++;
        n--;
    }
    return (NULL);
}


/*int main()
{
    char d[50] = "abcdefghijklmnopqrstuvwxyz";
    char m[50] = "string with\201inside !";
    char d1[50] = "abcdefghijklmnopqrstuvwxyz";
    char m1[50] = "string with\201inside !";
    memccpy(d, m, '\201', 21);
    ft_memccpy(d1, m1, '\201', 21);
    printf("s:%s\n", d);
    printf("m:%s\n", d1);
    
    printf("%c\n", 128);
    return 0;
}*/
