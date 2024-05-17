NAME = libft.a

SRCS = \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c\
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

OBJS = $(SRCS:.c=.o)

BONUSSRCS = \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUSOBJS = $(BONUSSRCS:.c=.o)

CC = gcc

CFLAGS = -c -Wall -Werror -Wextra

%.o: %.c
	$(CC) $(CFLAGS) $?

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $(OBJS)

.PHONY: all clean re fclean bonus
re: fclean all

clean:
	rm -f $(OBJS) $(BONUSOBJS)

fclean: clean
	rm -rf $(NAME)

bonus: $(OBJS) $(BONUSOBJS)
	$(AR) -rcs $(NAME) $(OBJS) $(BONUSOBJS)