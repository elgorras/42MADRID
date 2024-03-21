CC = cc
CFLAGS = -Wall -Wextra -Werror
SOURCE = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memcmp.c \
		ft_memchr.c \
		ft_memmove.c \
		
NAME = libft.a

$(NAME): $(SOURCE:.c=.o)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re all

clean:
	@rm -f $(SOURCE:.c=.o)

fclean: clean
	@rm -f $(NAME)

re: fclean all

all: $(NAME)

.DEFAULT_GOAL := all