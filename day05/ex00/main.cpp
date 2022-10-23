#include "Bureaucrat.hpp"


int main(void)
{
    Bureaucrat _b("Alex", 5);
    //should not throw anything
    try{
        std::cout << _b;

        std::cout << "incrementing bureaucrat " << _b.getName() << " three times..." << std::endl; 
        _b.increment();
        _b.increment();
        _b.increment();
        std::cout << _b;
    }
    catch (std::exception & e){
        std::cerr << e.what() << std::endl;
    }
    //should throw a too hight exception
    try {
        std::cout << "incrementing bureaucrat " << _b.getName() << " two times..." << std::endl; 
        _b.increment();
        _b.increment();
        std::cout << _b;
    }
    catch (std::exception & e){
        std::cerr << e.what() << std::endl;
    }
    //should throw a too low exception

    try {
        std::cout << _b;
        std::cout << "decrementing bureaucrat " << _b.getName() << " 150 times..." << std::endl; 
        for (int i = 0; i <= 150; i++)
            _b.decrement();
        std::cout << _b;
    }

    catch (std::exception & e){
        std::cerr << e.what() << std::endl;;
    }



    //another tests
	try {
		Bureaucrat _john("john", 201);
		std::cout << _john;
	}
    catch (std::exception & e){
        std::cerr << e.what() << std::endl;
    }
}