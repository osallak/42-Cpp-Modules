#include <iostream>
#include <exception>
#include <fstream>
#include <stack>
#include<array>
#include <iterator>
#include <vector>
#include <deque>

using namespace std;

int main()
{
    deque<int> __d;

    for (int i = 0; i < 100; i++){
        __d.push_back(i);
    }
    deque<int>::iterator begin;
    deque<int>::iterator end;

    begin = __d.begin();
    end = __d.end();
    for (; begin != end; begin++){
        *begin = 2001;
        std::cout << *begin << " ";
    }
    return 0;
}