/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:05:56 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:05:58 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    size_t count;
    size_t len;
    char *new;
    char *prt;
    char *ss1;

    count = 0;
    ss1 = (char*)s1;
    while (*s1)
    {
        if (ft_char_in_str(*s1, (char*)set) == 1)
            count++;
        s1++;
    }
  //  printf("%zu",count);
    len = ft_strlen(ss1) - count + 1;
   // printf("%zu\n",len);
  //  printf("%zu\n",len);
    new = malloc(len * sizeof(char));
    if (new == NULL)
        return (NULL);
    prt = new;
    while (*ss1)
    {
        if (!ft_char_in_str(*ss1,(char*)set))
        {
            *new = *ss1;
            new ++;
        }
        ss1++;
    }
    new[len]='\0';
    return (prt);
}

/*int main(int ac, char **av)
{
    char *p;
    p = ft_strtrim(av[1], av[2]);
 //   ft_strtrim(av[1], av[2]);
    printf("%s", p);
    return 0;
}*/
