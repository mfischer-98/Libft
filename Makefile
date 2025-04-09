NAME = libft.a
SRC = ft_isalpha.c

OBJ = $(SRC:.c=.o)

CC = cc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all