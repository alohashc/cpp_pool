# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alohashc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/31 19:19:18 by alohashc          #+#    #+#              #
#    Updated: 2017/11/01 18:24:06 by alohashc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC = main.cpp

SRC_O = $(SRC:.cpp=.o)

FLAG = -Wall -Werror -Wextra

all: $(NAME)
	
$(NAME): $(SRC_O)
	clang++ -o $(NAME) $(SRC_O)

%$(OBJ): %.c
	@clang++ $(FLAG) -c $<

clean:
	rm -f $(SRC_O)

fclean: clean
	rm -f $(NAME)

re: fclean all

