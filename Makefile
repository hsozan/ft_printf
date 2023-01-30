NAME		= libftprintf.a
CC			= gcc -Wall -Werror -Wextra 
RM			= rm -rf
AR			= ar r
CYAN		= \033[0;96m
BLUE		= \033[0;94m

all:	$(NAME)

$(NAME):
	@$(CC) -c *.c
	@$(AR) $(NAME) .
	@echo "$(BLUE)printf$(CYAN) fonksiyonları $(BLUE)$(NAME)$(CYAN) olarak derlendi"

clean:
	@rm *.o

fclean:
	@rm $(NAME)