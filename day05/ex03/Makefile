NAME = bureaucrats

SHRUBBERY = *_shrubbery

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
 
INC = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp  ShrubberyCreationForm.hpp Intern.hpp

OBJS = $(SRC:.cpp=.o)

all : $(NAME)


$(NAME) : $(OBJS)
	c++ $(CPPFLAGS) $^ -o $(NAME)

%.o : %.cpp $(INC)
	c++ $(CPPFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS) $()

fclean : clean
	rm -f $(NAME) $(SHRUBBERY)

re : fclean $(NAME)
