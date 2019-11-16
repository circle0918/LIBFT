/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:50:32 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:50:40 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    size_t *new;
    new = malloc((size) * sizeof(count));
    if (new == NULL)
        return (NULL);
    ft_bzero(new, count*size);
    return (new);
}

/*int main () {
   int i, n;
   int *a;

   i = 0;
   n = 0;

   a = (int*)calloc(n, sizeof(int));
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free( a );
   
   return(0);
}*/
