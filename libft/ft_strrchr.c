/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:05:19 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:05:22 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strrchr() function is identical to strchr(), except it locates the
 * last occurrence of c.*/

char *ft_strrchr(const char *s, int c)
{
    unsigned char *tmp;
    unsigned char *save;

    tmp = (unsigned char *)s;
    save = NULL;
    if (c == '\0')
        return strchr(s, '\0');
    while (*tmp)
    {
        if (*tmp == c)
            save = tmp;
        tmp++;
    }
    if (save == NULL)
        return NULL;
    else
        return (char *)(save);

    /*    /////////////////
    const char *found, *p;
    c = (unsigned char)c;
    ///Since strchr is fast, we use it rather than the obvious loop.  
    if (c == '\0')
        return strchr(s, '\0');
    found = NULL;
    while ((p = strchr(s, c)) != NULL)
    {
        found = p;
        s = p + 1;
    }
    return (char *)found;
*/
}

int main()
{

        char *src = "";
        printf("src : %d\n", *src);
        char *d1 = strrchr(src, 'd');
        char *d2 = ft_strrchr(src, 'd');

    printf("B%s\n", d1);
    printf("W%s\n", d2);

    return (0);
}
