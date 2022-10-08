NAME = animal
WRONGNAME = wroganimal
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp
WRONGSRCS = WrongMain.cpp WrongAnimal.cpp WrongCat.cpp WrongDog.cpp

INC = Animal.hpp Cat.hpp Dog.hpp
WRONGINC = WrongAnimal.hpp WrongCat.hpp WrongDog.hpp

OBJS = $(SRC:.cpp=.o)
WRONGOBJS = $(WRONGSRCS:.cpp=.o)

all : $(NAME)

wrong : $(WRONGNAME)

$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $^ -o $(NAME)

$(WRONGNAME) : $(WRONGOBJS)
	c++ $(CPPFLAGS) $^ -o $(WRONGNAME) 


%.o : %.cpp $(INC)
	c++ $(CPPFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS) $(WRONGOBJS)

fclean : clean
	rm -f $(NAME) $(WRONGNAME)

re : fclean $(NAME)
