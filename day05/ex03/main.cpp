#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void)
{
    Intern someRandomIntern;
    Form* rrf;
    try{
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    }
    catch (std::exception & e){
        std::cout << "Cannot create Form: " << e.what() << std::endl;
    }
    delete rrf;
    // try{
    //     rrf = someRandomIntern.makeForm("somethingElse", "home");
    // }
    // catch (std::exception & e){
    //     std::cout << "Cannot create Form: " << e.what() << std::endl;
    // }
}