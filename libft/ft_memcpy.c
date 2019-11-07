#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;

    d = dst;
    s = (unsigned char *)src;

    while (n)
    {
        *d = *s;
        d++;
        s++;
        n--;
    }
    return dst;
}

#include <assert.h>
/*int main()
{
    char a[50] = "hello";
    char b[50] = "world";
    char a1[50] = "hello";
    char b1[50] = "world";
    //     assert(strcmp(memcpy(a,b,2),(ft_memcpy(a1,b1,2)))==0);
    ft_memcpy(a, b, 50);
      memcpy(a1,b1,50);
      printf("%s\n",a1);
    printf("%s\n", a);
    return 0;
}*/