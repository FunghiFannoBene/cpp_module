# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shhuang <dsheng1993@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 19:51:20 by shhuang           #+#    #+#              #
#    Updated: 2023/12/26 19:51:21 by shhuang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -std=c++98 -Wall -Werror -Wextra
TARGET = program

all: $(TARGET)

$(TARGET): *.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) *.cpp

clean:
	rm -f $(TARGET) *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all
