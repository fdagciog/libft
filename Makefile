# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdagciog <fdagciog@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 13:26:42 by fdagciog          #+#    #+#              #
#    Updated: 2022/12/16 18:51:57 by fdagciog         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
OPTION = -c
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = *.c

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) *.o
bonus:
	gcc $(FLAG) $(OPTION) $(BONUS)
	ar rc $(NAME) *.o
clean:
	rm -f  *.o
fclean: clean 
	rm -f $(NAME)
re: fclean all

.PHONY: all bonus clean fclean re