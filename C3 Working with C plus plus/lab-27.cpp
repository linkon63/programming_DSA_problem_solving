#include <iostream>
#include <string>
#include <deque>

bool isPalindrome(const std::string& s) {
    std::deque<char> deque;
    for (char c : s) {
        deque.push_back(c);
    }
    while (deque.size() > 1) {
        if (deque.front() != deque.back()) {
            return false;
        }
        deque.pop_front();
        deque.pop_back();
    }
    return true;
}

int main() {
    std::string s;
    std::cin >> s;
    if (isPalindrome(s)) {
        std::cout << s << "Yes" << std::endl;
    } else {
        std::cout << s << "No" << std::endl;
    }
    return 0;
}




//#include <iostream>
//#include <string>
//#include <stack>
//
// Function to get the precedence of an operator
//int precedence(char op) {
//    if (op == '+' || op == '-') {
//        return 1;
//    } else if (op == '*' || op == '/') {
//        return 2;
//    } else {
//        return 0;
//    }
//}
//
// Function to evaluate a postfix expression
//int evaluatePostfix(std::string postfix) {
//    std::stack<int> operands;
//
//    for (char c : postfix) {
//        if (isdigit(c)) {
//            operands.push(c - '0');
//        } else {
//            int operand2 = operands.top();
//            operands.pop();
//            int operand1 = operands.top();
//            operands.pop();
//            int result;
//
//            switch (c) {
//                case '+':
//                    result = operand1 + operand2;
//                    break;
//                case '-':
//                    result = operand1 - operand2;
//                    break;
//                case '*':
//                    result = operand1 * operand2;
//                    break;
//                case '/':
//                    result = operand1 / operand2;
//                    break;
//                default:
//                    std::cerr << "Invalid operator: " << c << std::endl;
//                    return 0;
//            }
//
//            operands.push(result);
//        }
//    }
//
//    return operands.top();
//}
//
// Function to convert an infix expression to a postfix expression
//std::string infixToPostfix(std::string infix) {
//    std::stack<char> operators;
//    std::string postfix = "";
//
//    for (char c : infix) {
//        if (isdigit(c)) {
//            postfix += c;
//        } else if (c == '(') {
//            operators.push(c);
//        } else if (c == ')') {
//            while (!operators.empty() && operators.top() != '(') {
//                postfix += operators.top();
//                operators.pop();
//            }
//            if (!operators.empty() && operators.top() == '(') {
//                operators.pop();
//            }
//        } else {
//            while (!operators.empty() && precedence(c) <= precedence(operators.top())) {
//                postfix += operators.top();
//                operators.pop();
//            }
//            operators.push(c);
//        }
//    }
//
//    while (!operators.empty()) {
//        postfix += operators.top();
//        operators.pop();
//    }
//
//    return postfix;
//}
//
//int main() {
//    std::string infix;
//    std::cin>>infix;
//    std::string postfix = infixToPostfix(infix);
//    std::cout << postfix << std::endl; // Output: 456+8*+1-
//    int result = evaluatePostfix(postfix);
//    std::cout << result << std::endl; // Output: 86
//    return 0;
//}
//



//#include <iostream>
//#include <string>
//#include <stack>
//
//// Function to get the precedence of an operator
//int precedence(char op) {
//    if (op == '+' || op == '-') {
//        return 1;
//    } else if (op == '*' || op == '/') {
//        return 2;
//    } else {
//        return 0;
//    }
//}
//
//// Function to convert an infix expression to a postfix expression
//std::string infixToPostfix(std::string infix) {
//    std::stack<char> operators;
//    std::string postfix = "";
//
//    for (char c : infix) {
//        if (isalpha(c)) {
//            postfix += c;
//        } else if (c == '(') {
//            operators.push(c);
//        } else if (c == ')') {
//            while (!operators.empty() && operators.top() != '(') {
//                postfix += operators.top();
//                operators.pop();
//            }
//            if (!operators.empty() && operators.top() == '(') {
//                operators.pop();
//            }
//        } else {
//            while (!operators.empty() && precedence(c) <= precedence(operators.top())) {
//                postfix += operators.top();
//                operators.pop();
//            }
//            operators.push(c);
//        }
//    }
//
//    while (!operators.empty()) {
//        postfix += operators.top();
//        operators.pop();
//    }
//
//    return postfix;
//}
//
//int main() {
//    std::string infix;
//    std::cin>>infix;
//    std::string postfix = infixToPostfix(infix);
//    std::cout << postfix << std::endl; // Output: abc*+de/-
//    return 0;
//}
