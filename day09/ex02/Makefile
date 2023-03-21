NAME = PmergeMe 

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp mergeInsSortDqueue.cpp mergeInsSortVector.cpp


OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $^ -o $(NAME)

%.o : %.cpp 
	c++ $(CPPFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)