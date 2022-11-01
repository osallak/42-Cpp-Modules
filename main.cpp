#include <iostream>
#include <exception>
#include <fstream>
#include <stack>
#include<array>
#include <iterator>
#include <vector>
#include <deque>

using namespace std;

class A{
    public:
    int x;
    A(int x = 2000): x(x){} 
};
int main()
{

    A a(32);
    cout << a.x;
    return 0;
}