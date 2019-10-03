#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ss1;
    unsigned char *ss2;
    size_t i;

    ss1 = (unsigned char *)s1;
    ss2 = (unsigned char *)s2;
    i = n;
    if (i == 0)
        return (0);
    while (*ss1 && *ss2 && (*ss1 == *ss2) && i)
    {
        ss1++;
        ss2++;
        i--;
    }
    return (*ss1 - *ss2);
}

int main(int ac, char **av)
{
    printf("%d\n", memcmp(av[2], av[1], 5));
    printf("%d\n", ft_memcmp(av[4], av[3], 5));
    return 0;
}