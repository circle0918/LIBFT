#include "libft.h"

char *ft_strncpy(char *dest, char *src, size_t n)
{
    char *s;
    char *d;
    size_t i;

    s = src;
    d = dest;
    i = 0;
    while (s[i] != '\0' && i < n)
    {
        d[i] = s[i];
        i++;
    }
    while (i < n)
    {
        d[i] = '\0';
        i++;
    }
    return (d);
}