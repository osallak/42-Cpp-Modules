NAME = abstract
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

INC = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)


$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $^ -o $(NAME)

%.o : %.cpp $(INC)
	c++ $(CPPFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
