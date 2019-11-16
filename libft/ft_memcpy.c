/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:56:04 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:56:06 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = dst;
    s = (unsigned char *)src;

    if (d == NULL && s == NULL)
        return (NULL);
    while (n)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
    return dst;
}

/*#include <assert.h>
int main()
{
    // char a[50] = "hello";
    // char b[50] = "world";
    // char a1[50] = "hello";
    // char b1[50] = "world";
    //     assert(ft_memcpy(memcpy((void *)0), ((void *)0), 3),ft_memcpy(((void *)0), ((void *)0), 3)）== 0));
    //  ft_memcpy(a, b, 50);
    //    memcpy(a1,b1,50);
 //  printf("%s\n", ft_memcpy(((void *)0), "segfaulter tu dois", 17));
     printf("%s\n",memcpy(((void *)0), "segfaulter tu dois", 17));
    // printf("%s\n", a);
    return 0;
}*/
