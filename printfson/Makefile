# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsozan <hsozan@student.42.tr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/26 22:17:07 by hsozan            #+#    #+#              #
#    Updated: 2022/06/14 15:33:03 by hsozan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= gcc -Wall -Werror -Wextra 
RM			= rm -rf
AR			= ar r
OUTPUT		= output/*.o
CYAN		= \033[0;96m
BLUE		= \033[0;94m

all:		$(NAME)

$(NAME):
	@mkdir output
	@make bonus -C libft
	@mv libft/*.o ./output
	@$(CC) -c *.c  -I ft_printf.h
	@mv *.o output
	@$(RM) libft/libft.a
	@$(AR) $(NAME) $(OUTPUT)
	@echo "$(BLUE)Libft $(CYAN)ve $(BLUE)printf$(CYAN) fonksiyonları $(BLUE)$(NAME)$(CYAN) olarak derlendi"

clean:
	@$(RM) output 
	@echo "$(BLUE).o$(CYAN) dosyaları silindi"

fclean:
	@$(RM) output $(NAME)
	@echo " $(BLUE)$(NAME)$(CYAN) ve $(BLUE).o$(CYAN) dosyaları silindi"

norm:
	@echo "$(BLUE)libft dosyaları :$(CYAN)"
	@norminette libft/*.c libft/*.h
	@echo "$(BLUE)ft_printf dosyaları :$(CYAN)"
	@norminette *.c *.h
test:
	@mv main.c ..
	@make re
	@mv ../main.c .
	@gcc main.c $(NAME)
	@./a.out

re: fclean all
