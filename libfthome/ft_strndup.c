/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:04:41 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:04:43 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strndup(const char *src, size_t n)
{
    char *new;

    new = malloc((n + 1) * sizeof(char));
    if (new == NULL)
        return (NULL);
    new = ft_strncpy(new, (char *)src, n);
    new[n] = '\0';
    return (new);
}
/*#include <stdio.h>
int main()
{
    char *p=ft_strndup("hello",1);
    printf("hello word\n");
    printf("%s\n",p);
    free(p);
    
    return 0;
}*/
