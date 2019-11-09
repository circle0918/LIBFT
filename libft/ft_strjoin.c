#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new;

    new = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
  //  printf("%p\n",new);
    if (new == NULL)
        return (NULL);
    ft_strcpy(new,ft_strcat((char*)s1,(char*)s2));
  //  printf("%p\n",new);
    return (new);
}

int main(int ac, char**av)
{
    char *p;
    p=ft_strjoin(av[1],av[2]);
    printf("%s",p);
    return 0;
}