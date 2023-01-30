NAME		= libftprintf.a
CC			= gcc -Wall -Werror -Wextra 
RM			= rm -rf
AR			= ar r
CYAN		= \033[0;96m
BLUE		= \033[0;94m

all:	$(NAME)

$(NAME):
	@$(CC) -c ft_printf.c
	@$(AR) $(NAME) ft_printf.o
	@echo "$(BLUE)printf$(CYAN) fonksiyonları $(BLUE)$(NAME)$(CYAN) olarak derlendi"

clean:
	@rm *.o
	@echo "$(BLUE)output dosyası$(CYAN) silindi"

fclean:
	@rm $(NAME)
	@@echo "$(BLUE)library dosyası$(CYAN) silindi"

re: fclean all
