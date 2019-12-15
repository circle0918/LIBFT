#include <string.h>
#include <stdio.h>
#include "libft.h"
int main()
{
	char *s = "NULL";
        char *d = "NULL";
//printf("%p\n",memcpy(s,d,1));
printf("%p\n", s);
printf("%p\n", ft_memcpy(s, d, 1));
}

