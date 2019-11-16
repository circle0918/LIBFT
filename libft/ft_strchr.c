/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:00:04 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:00:06 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    const char *tmp;

    tmp = s;
    while (*tmp)
    {
        if (*tmp == c)
            return (char*)(tmp);
        tmp++;
    }
    if (c == '\0')
    return (char*)(tmp);
    else
    return (NULL);
}


/*int main () {
   const char str[] = "what";
   const char ch = '\0';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/
