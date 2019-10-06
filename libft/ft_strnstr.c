#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    if (*s2 == '\0')
        return (char *)(s1);
    while (*s1 && *s2 && n >= (ft_strlen(s2) + 1))
    {
        if (ft_strncmp(s1, s2, n) == 0)
        {
            return (char *)s1;
        }
        else
            s1++;
    }
    return NULL;
}

int main(int ac, char **av)
{
    char m[] = "hello";
    char n[] = "el";
    char *mn;
    mn = ft_strnstr(m, n, 3);
    printf("%s", mn);
    return 0;
}