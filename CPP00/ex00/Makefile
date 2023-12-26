# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 19:49:28 by shhuang           #+#    #+#              #
#    Updated: 2023/12/26 19:49:29 by shhuang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM = program

STD = -std=c++98

FLAGS = -Wall -Werror -Wextra

all:
	g++ $(STD) $(FLAGS) -o $(PROGRAM) *.cpp

clean: rm -f $(PROGRAM) *.o

fclean: rm -f $(PROGRAM) *.o

re: clean all