#include <iostream>


using namespace std;

class Base { public: virtual void f(){ cout << "Base\n";} virtual ~Base( void ) { std::cout << "~Base\n";} };
class D : public Base { public: void f(){ cout << "Derived\n";} ~D( void ) { std::cout << "~Derived\n";}};

int main(int ac, char **av)
{
    Base *s = new D;
    // s->f();
    delete s;
}