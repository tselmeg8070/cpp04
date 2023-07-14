NAME = run
CXX = c++
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -std=c++98

SRCS = 	Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		main.cpp

INCLS = Animal.hpp \
		Dog.hpp \
		WrongCat.hpp \
		WrongAnimal.hpp \
		Cat.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(VFLAGS) -o $(NAME) $^

%.o : %.cpp $(INCLS)
	$(CXX) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
