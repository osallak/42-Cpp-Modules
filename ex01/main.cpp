#include <iostream>
#include <algorithm>
#include <stack>
# define OPERATORS "+-*/"


// check if the string contains any operators
bool isContainOps(std::string str, size_t i, std::string operators = OPERATORS)
{
    while (i < str.length())
    {
        if (operators.find(str[i]) != std::string::npos)
            return true;
        i++;
    }
    return false;
}
 
long long int evalRPN(std::string str)
{
    std::stack<int> stack;
    std::string operators(OPERATORS);

    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] == ' ')
            continue;
        if ((operators.find(str[i]) != std::string::npos && stack.size() < 2 ) || stack.size() > 2 || (stack.size() >= 1 && isdigit(str[i]) && !isContainOps(str, i + 1)))
        {
            throw std::invalid_argument("Invalid input");
        } else if (operators.find(str[i]) != std::string::npos) {
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            switch (str[i])
            {
            case '+':
                stack.push(a + b);
                break;
            case '-':
                stack.push(b - a);
                break;
            case '*':
                stack.push(a * b);
                break;
            case '/':
                stack.push(b / a);
                break;
            }
        } else {
            if (!isdigit(str[i])) {
                throw std::invalid_argument("Invalid input");
                return 1;
            }
            stack.push(str[i] - '0');
        } 
       
    }
    return stack.top();
}

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./rpn \" RPN expresstion\"" << std::endl;
        return 1;
    }
    std::stack<int> stack;
    std::string str(av[1]);

    long long int result = 0;

    try {
        result = evalRPN(str);
    } catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
        return 1;
    }

    std::cout << "Result: " << result << std::endl;
}