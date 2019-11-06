#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t srclen;

    srclen = ft_strlen(src);
    if (size == 0)
        return (0);
    if (srclen < size - 1)
        ft_memcpy(dst, src, srclen + 1);
    else if (size)
}