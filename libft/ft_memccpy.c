#include "libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = dst;
    s = (unsigned char *)src;
    while (n)
    {
        *d = *s;
        if (*s == c)
            return (void *)(d + 1);
        d++;
        s++;
        n--;
    }
    return (NULL);
}

int main()
{
    char d[50] = "hello";
    char m[50] = "world";
    char d1[50] = "hello";
    char m1[50] = "world";
    memccpy(d, m, 'o', 7);
    ft_memccpy(d1, m1, 'o', 7);
    printf("s:%s\n", d);
    printf("m:%s\n", d1);
    return 0;
}