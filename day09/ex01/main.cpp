# include <iostream>
# include <string>
# include <stack>
# include <algorithm>


bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}
int evaluateRpn(std::string const& expr)
{
    std::stack<int> stack;

    for (size_t i = 0; i < expr.length(); ++i){
        if (expr[i] == ' ')
            continue;
        if (isOperator(expr[i])){
            if (stack.size() < 2)
                throw std::invalid_argument("Invalid rpn expression");
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            if (expr[i] == '+')
                stack.push(a + b);
            else if (expr[i] == '-')
                stack.push(b - a);
            else if (expr[i] == '*')
                stack.push(a * b);
            else if (expr[i] == '/')
                stack.push(b / a);
        } else if (isdigit(expr[i])){
            stack.push(expr[i] - '0');
        } else {
            throw std::invalid_argument("Invalid rpn expression");
        }
    }
    if (stack.size() != 1)
        throw std::invalid_argument("Invalid rpn expression");
    return stack.top();
}
int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./rpn 'postfix expression to evaluate'" << std::endl;
        return 1;
    }

    std::string expr(av[1]);
    int result = 0;
    try {
        result = evaluateRpn(expr);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
        return 1;
    }
    std::cout << result << std::endl;
    return 0;
}