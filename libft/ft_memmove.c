#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;
    size_t l;

    d = dst;
    s = (unsigned char *)src;
    l = len;
    while (l)
    {
       // printf("%s",d);
        *d = *s;
        l--;
        d++;
        s++;
      //  printf("%zd\n",l);
    }
    return (dst);
}

int main(int ac, char**av)
{
    printf("22%s  44%s\n",av[2],av[4]);
    memmove(av[1],av[2],2);
    ft_memmove(av[3],av[4],2);
    printf("hanshu dst %s   src %s\n",av[1],av[2]);
    printf("wodeaa dst %s   src %s\n",av[3],av[4]);
    return 0;
}