#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t srclen;

    srclen = ft_strlen(src);
    if (size == 0)
        return (0);
    if (srclen < size - 1)
        ft_memcpy(dst, src, srclen + 1);
    else
        {
            ft_memecpy(dst, src, size - 1);
            dst[size-1]='\0';
        }
    return (srclen);
}
int main ()
{
    char *d="hello";
    char *s="word";
    char *d1="hello";
    char *s1="word";
    printf("%lu",strlcpy(d,s,0));
    printf("%zu",ft_strlcpy(d1,s1,0));
    return 0;
}