# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/02 23:56:36 by shhuang           #+#    #+#              #
#    Updated: 2024/01/02 23:56:38 by shhuang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -g -std=c++98 -Wall -Werror -Wextra
TARGET = program

all: $(TARGET)

$(TARGET): *.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) *.cpp

clean:
	rm -f $(TARGET) *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all
