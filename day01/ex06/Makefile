NAME := harlfilter

CPPFLAGS := -Wall -Wextra -Werror -std=c++98

SRC := main.cpp Harl.cpp

OBJS := $(SRC:.cpp=.o)

INC := Harl.hpp

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
