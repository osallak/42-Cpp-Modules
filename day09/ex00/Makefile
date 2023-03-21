NAME = btc

CPPFLAGS = -Wall -Wextra -Werror -std=c++17

SRC = main.cpp


OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) utils.hpp
	c++ $(CPPFLAGS) $< -o $(NAME)

%.o : %.cpp utils.hpp 
	c++ $(CPPFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)