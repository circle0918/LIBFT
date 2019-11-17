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
    //    if (c == '\0')
    //        return (char *)(tmp);
      save = NULL;
    if (*tmp)
    {
        while (*tmp)
        {
            if (*tmp == c)
                save = tmp;
            tmp++;
            if (c == '\0' && *tmp == '\0')
                return (char *)(tmp);
         //   else
         //       return (NULL);
        }
        return (char *)(save);
    }
    else
        return (NULL);
    //   else
    //       return (NULL);
}

/*int main()
{

        char *src = "īœ˙ˀ˘¯ˇ¸¯.œ«‘––™ª•¡¶¢˜ˀ";
        char *d1 = strrchr(src, L'–');
        char *d2 = ft_strrchr(src, L'–');

    printf("W%s\n", d2);
    printf("B%s\n", d1);

    return (0);
}*/
