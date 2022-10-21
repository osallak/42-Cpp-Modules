NAME = array

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRC = main.cpp 

INC = Array.hpp

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

run : $(NAME)
	clear
	./$(NAME)

re : fclean $(NAME)
