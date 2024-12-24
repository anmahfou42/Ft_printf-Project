NAME = libftprintf.a

SRC = ft_printf.c put_nbr.c put_char.c put_hexa.c \
put_str.c put_unsigned.c put_ptr.c 

CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.SECONDARY: $(OBJ)

.PHONY: clean fclean re
