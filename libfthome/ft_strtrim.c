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

/* Alloue (avec malloc(3)) et retourne une copie de la
 * chaine de caractères donnée en argument, sans les
 * caractères spécifiés dans le set donné en argument
 * au début et à la fin de la chaine de caractères.*/

static int ft_char_in_str(char c, char *str)
{
    while (*str)
    {
        if (*str == c)
            return (1);
        str++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *front;
    char *back;

    if (!s1 || !set)
        return (0);
    front = (char *)s1;
    back = (char *)(front + ft_strlen(s1) - 1);
    // printf("%ld\n",front - back);
    // printf("%c&&",*back);

    while (*front)
    {
        if (!ft_char_in_str(*front, (char *)set))
            break;
        front++;
        if (*front == '\0')
            return ft_strdup("");
    }
    while (*back)
    {
        if (!ft_char_in_str(*back, (char *)set))
        {
            //printf("%c : %ld\n", *back, back - s1);
            break;
        }
        back--;
    }

    return (ft_substr(s1, (front - s1), (back - front + 1)));
}

// int main(int ac, char **av)
// {
//     char s1[] = "  \t \t \n  t \n\n\n\t";
//        // char *s2 = "Hello \t  Please\n Trim me !";
//         //char *ret = ft_strtrim(s1, " \n\t");
//         char *ret = ft_strtrim(s1, " \n\t");

//   printf("%s", ret);
//     return 0;
// }
