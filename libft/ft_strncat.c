/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:03:44 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:03:46 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
    char *tmp;

    tmp = s1;
    while (*s1)
        s1++;
    while (n && *s2)
    {
        *s1 = *s2;
        s2++;
        n--;
    }
    *s1 = '\0';
    return (tmp);
}

/*int main(int ac, char**av)
{
  //  strncat(av[1],av[2],2);
  //  ft_strncat(av[3],av[4],2);

    printf("hanshu %s\n",ft_strncat(av[1],av[2],2));
 //   printf("wodeaa %s\n",ft_strncat(av[3],av[4],2));
    return 0;
}*/
