NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra 

SRC = ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c 
OBS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONYJ: all clean fclean re