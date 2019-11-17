/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:06:07 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:06:10 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* cut len longer, from index start*/
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *new;
    size_t i;

    i = 0;
    new = malloc((len + 1) * sizeof(char));
    if (new == NULL || s == NULL)
        return (NULL);
    if (ft_strlen(s) < start)
        return (ft_strdup(""));
    while (i < len)
    {
        new[i] = s[start];
        i++;
        start++;
    }
    new[len] = '\0';
    return (new);
}

/*int main()
{
    char p[] = "hello";
    char *new = ft_substr(p, 0, 0);
    printf("%s", new);
    free(new);
    return 0;
}*/
