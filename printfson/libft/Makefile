NAME = libft.a
PATH_SRC = ./
PATH_INCLUDE = ./
FLAG = -Wall -Wextra -Werror
OPTION = -c
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = *.c
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME):
	@gcc $(FLAG) $(OPTION) $(SRC) -I $(PATH_INCLUDE)
	@ar rc $(NAME) *.o

bonus:
	@gcc $(FLAG) $(OPTION) $(BONUS) -I $(PATH_INCLUDE)
	@ar rc $(NAME) *.o

clean:
	/bin/rm -f  *.o
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
