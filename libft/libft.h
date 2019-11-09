#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int ft_char_in_str(char c, char *str);
void *ft_memset(void *b, int c, size_t len);
void *ft_memalloc(size_t size);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlen(const char *s);
char	*ft_strcat(char *dest, char *src);
char *ft_strdup(const char *s1);
char *ft_strcpy(char *d, char *s);
char *ft_strncpy(char *dest, char *src, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(char *s1, char *s2, size_t n);
char *ft_strstr(const char *s1, const char *s2);
char *ft_strnstr(const char *s1, const char *s2, size_t n);
int strcmp(const char *s1, const char *s2);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *str);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
void *ft_calloc(size_t count, size_t size);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);

#endif