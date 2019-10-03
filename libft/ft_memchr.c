#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *src;
    size_t i;

    src = (unsigned char *)s;
    i = n;
    while (i)
    {
        if (*src == c)
            return src;
        src++;
        i--;
    }
    return NULL;
}

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'y';
   char *ret;

   ret = ft_memchr(str, ch, 500);

   printf("%s", ret);

   return(0);
}