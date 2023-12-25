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
