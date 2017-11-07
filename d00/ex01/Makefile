# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alohashc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 12:02:36 by alohashc          #+#    #+#              #
#    Updated: 2017/10/30 12:22:32 by alohashc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = Phonebook.cpp\
	  Contact.cpp\
	  main.cpp\

INC = Phonebook.hpp\
	  Contact.hpp\

SRC_O = $(SRC:.c=.o)

FLAG = -Wall -Werror -Wextra

all: $(NAME)
	
$(NAME): $(SRC_O)
	clang++ -o $(NAME) $(SRC_O)

%$(OBJ): %.c
	@clang++ $(FLAG) -I $(INC)-c $<

clean:
	rm -f $(SRC_O)

fclean: clean
	rm -f $(NAME)

re: fclean all

