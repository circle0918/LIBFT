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

// static	char	*ft_strncpy(char *dest, char const *src, size_t n)
// {
// 	char	*s;
// 	char	*d;
// 	size_t	i;

// 	s = (char *)src;
// 	d = dest;
// 	i = 0;
// 	while (s[i] != '\0' && i < n)
// 	{
// 		d[i] = s[i];
// 		i++;
// 	}
// 	while (i < n)
// 	{
// 		d[i] = '\0';
// 		i++;
// 	}
// 	return (d);
// }

// char			*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*new;
// 	size_t	i;

// 	i = 0;
// 	if (!s || !len)
// 		return (NULL);
// 	if (ft_strlen(s) < start)
// 		return (ft_strdup(""));
// 	while (s[start + i] && i < len)
// 	{
// 		if (!(new = malloc(i + 1)))
// 			return (0);
// 		ft_strncpy(new, &s[start], len);
// 	//	printf("%s\n", new);
// 		i++;
// 	}
// 	new[i] = '\0';
// 	return (new);
// }



#include "libft.h"

static char        *ft_strnew(size_t size)
{
    char    *s;

    if (!(s = (char *)malloc(sizeof(char) * (size + 1))))
        return (NULL);
    ft_bzero(s, size + 1);
    return (s);
}

static char        *ft_strncpy(char *dest, const char *src, size_t n)
{
    char                *srccpy;

    srccpy = dest;
    ++n;
    while (--n > 0 && *src != '\0')
    {
        *dest++ = *src++;
    }
    while (n-- > 0 && *dest != '\0')
    {
        *dest = '\0';
        ++dest;
    }
    return (srccpy);
}

char            *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    i;
    char    *tab;

    if (!s)
        return (0);
    if (start > ft_strlen(s))
    {
        if (!(tab = ft_strnew(1)))
            return (0);
        return (tab);
    }
    i = 0;
    while (s[start + i] && i < len)
        i++;
    if (!(tab = ft_strnew(i)))
        return (0);
    ft_strncpy(tab, &s[start], len);
    return (tab);
}

/*int main()
{
    char p[] = "hello";
    char *new = ft_substr(p, 0, 0);
    printf("%s", new);
    free(new);
    return 0;
}*/
