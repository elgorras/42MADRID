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
		ft_bzero.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

NAME = libft.a

$(NAME): $(SOURCE:.c=.o)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re all bonus

bonus: $(BONUS:.c=.o)

$(BONUS:.c=.o):
	${CC} ${CFLAGS} -c $(BONUS)
	ar -rcs ${NAME} ${BONUS:.c=.o}

clean:
	@rm -f $(SOURCE:.c=.o) $(BONUS:.c=.o)

fclean: clean
	@rm -f $(NAME)

re: fclean all

all: $(NAME)

.DEFAULT_GOAL := all