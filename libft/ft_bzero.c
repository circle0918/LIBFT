#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *str;
    
    str = s;
    while (n)
    {
        *str = 0;
        str++;
        n--;
    }
}

#include <stdio.h>
int main()
{
  //   char buffer[80];

  //  bzero( buffer, 80 );
    char str[] = "hello";
//    char *str1 = "hello";
//    void *p;
//    void *b;
//    p = str;
//    b = str1;
//    ft_bzero(p,2);
    ft_bzero(str,0);
    printf("%c,%c,%c",str[0],str[1],str[2]);
 //   printf("%s",str1);*/
    return 0;
}