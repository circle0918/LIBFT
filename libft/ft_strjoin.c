/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:01:10 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 15:01:13 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char *new;

  //  printf("%p\n",new);
  if (!s1 || !s2 || !(new = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char))))
    return (NULL);
  ft_strncpy(new, (char *)s1, ft_strlen(s1));
  ft_strcpy(new + ft_strlen(s1), (char *)s2);
  //  printf("%p\n",new);
  return (new);
}

/*int main(int ac, char**av)
{
    char *p;
    p=ft_strjoin(av[1],av[2]);
    printf("%s",p);
    return 0;
}*/
