#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

// int ft_char_in_str(char c, char *str);
void *ft_memset(void *b, int c, size_t len);
void *ft_memalloc(size_t size);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlen(const char *s);
char *ft_strdup(const char *s1);
char *ft_strcpy(char *d, char *s);
char *ft_strncpy(char *dest, char *src, size_t n);
char *ft_strchr(const char *s, int c);

#endif