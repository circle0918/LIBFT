/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 14:54:26 by yyuan             #+#    #+#             */
/*   Updated: 2019/11/16 14:54:29 by yyuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int count_size(int n)
{
    int count;

    count = 0;

}*/
char *ft_itoa(int n)
{
    int f;
    unsigned int nbr;
    int len;

    char *new;

    f = 0;
    len = 0;
    if (n < 0)
    {
        f = 1;
        n = n * (-1);
    }
    nbr = n;
    while (n)
    {
        n /= 10;
        len++;
    }
    int count = f + len + 1;
    new = (char *)malloc(count * sizeof(char));
    if (new == NULL)
        return (NULL);
    if (f == 1)
    {
        new[0] = '-';
    }
    while (nbr)
    {
        new[count - 1] = nbr % 10 + '0';
        count--;
        nbr /= 10;
    }
    new[count] = '\0';
    return (new);
}

/*int main(void)
{
    char *new = ft_itoa(1234);
    printf("%s\n", new);
    free(new);
    return (0);
}*/
