# include <iostream>
# include <string>
# include <stack>
# include <algorithm>


static bool isOperator(char c) throw()
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

static int evaluateRpn(std::string const& expr)
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
            switch (expr[i])
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
                    if (a == 0)
                        throw std::invalid_argument("Math error");
                    stack.push(b / a);
                    break;
                default:
                    break;
            }
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
int main(int ac, char **av) throw()
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