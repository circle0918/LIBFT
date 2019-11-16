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

char *ft_strrchr(const char *s, int c)
{
    const char *tmp;
    const char *save;

    tmp = s;
    while (*tmp)
    {
        if (*tmp == c)
        {
            save = tmp;
        }
        tmp++;
    }
    return (char *)(save);
    if (c == '\0')
    return (char*)(tmp);
    else
    return (NULL);
}

/*int main () {
   const char str[] = "whahth";
   const char ch = '\0';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/
