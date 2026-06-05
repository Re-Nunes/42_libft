NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra 

SRC = ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_toupper.c \
	  ft_tolower.c \
	 

OBS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBS)
	ar rcs $(NAME) $(OBS)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
