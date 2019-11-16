/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:05:38 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:05:41 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *s1, const char *s2)
{
    if (*s2 == '\0')
        return ((char *)s1);
    while (*s1 && *s2)
    {
        if (ft_strncmp((char *)s1, (char *)s2, ft_strlen(s2) == 0))
        {
            return (char *)s1;
        }
        else
            s1++;
    }
    return (NULL);
}

/*int main()
{
    	char *s1 = "MZIRIBMZIRIBMZP";
	char *s2 = "MZIRIBMZP";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
    printf("%s",i1);
    printf("%s",i2);
    return 0;
}*/