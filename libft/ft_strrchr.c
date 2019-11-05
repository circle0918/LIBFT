#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    const char *tmp;
    const char *save;

    tmp = s;
    while (*tmp)
    {
        if (*tmp == c)
        {
            save = tmp;
        }
        tmp++;
    }
    return (char *)(save);
    if (c == '\0')
    return (char*)(tmp);
    else
    return (NULL);
}

int main () {
   const char str[] = "whahth";
   const char ch = '\0';
   char *ret;

   ret = strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}