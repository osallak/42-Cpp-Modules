#include "Bureaucrat.hpp"


int main(void)
{
    Form _form("CertificatDeResidence" , 100, 100);
    Bureaucrat lkhlifa("lkhlifa", 50);
    Bureaucrat lmqaddem("lmqaddem",149);
    
    lmqaddem.signForm(_form);
    lkhlifa.signForm(_form);

    std::cout << _form;
}