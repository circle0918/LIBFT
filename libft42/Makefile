NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
SRC	=	ft_atoi.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strchr.c\
		ft_strdup.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_substr.c\
		ft_strtrim.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strmapi.c\
		ft_strncpy.c\
		ft_strcpy.c\
		ft_strndup.c\
		ft_strnstr.c

BONUS	 =	 ft_lstadd_front_bonus.c\
			 ft_lstlast_bonus.c\
			 ft_lstnew_bonus.c\
			 ft_lstsize_bonus.c\
			 ft_lstadd_back_bonus.c\
			 ft_lstdelone_bonus.c\
			 ft_lstclear_bonus.c\
			 ft_lstiter_bonus.c\
			 ft_lstmap_bonus.c

OBJS = $(SRC:.c=.o)

OBJ_BONUS=	$(BONUS:.c=.o)

DEPS = ./libft.h

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	ar rc $(NAME)	$(OBJS)

bonus	:$(OBJ_BONUS) libft.h
	ar rc $(NAME) $(OBJ_BONUS) $(DEPS)

clean:
	$(RM) $(OBJS) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
