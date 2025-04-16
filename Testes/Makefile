CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = ../Libft
LIBFT = $(LIBFT_DIR)/libft.a
INCLUDES = -I $(LIBFT_DIR)

SRCS = ./srcs/main.c ./srcs/test_ft_strlen.c ./srcs/test_ft_atoi.c ./srcs/test_ft_bzero.c \
./srcs/test_ft_isalnum.c ./srcs/test_ft_isalpha.c ./srcs/test_ft_isascii.c ./srcs/test_ft_isdigit.c ./srcs/test_ft_isprint.c ./srcs/test_ft_itoa.c ./srcs/test_ft_strchr.c ./srcs/test_ft_strdup.c ./srcs/test_ft_strjoin.c ./srcs/test_ft_strlcat.c ./srcs/test_ft_strlcpy.c \
./srcs/test_ft_strncmp.c ./srcs/test_ft_memchr.c ./srcs/test_ft_memcmp.c \
./srcs/test_ft_calloc.c ./srcs/test_ft_memcpy.c ./srcs/test_ft_memset.c \
./srcs/test_ft_putchar_fd.c ./srcs/test_ft_putendl_fd.c ./srcs/test_ft_putnbr_fd.c \
./srcs/test_ft_putstr_fd.c ./srcs/test_ft_split.c ./srcs/test_ft_striteri.c \
./srcs/test_ft_strmapi.c ./srcs/test_ft_strnstr.c ./srcs/test_ft_strrchr.c \
./srcs/test_ft_strtrim.c ./srcs/test_ft_substr.c ./srcs/test_ft_tolower.c ./srcs/test_ft_toupper.c
OBJS = $(SRCS:.c=.o)

NAME = test_exec

all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(INCLUDES) -L$(LIBFT_DIR) -lft -o $(NAME)

clean:
	$(RM) $(OBJS) $(NAME)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

