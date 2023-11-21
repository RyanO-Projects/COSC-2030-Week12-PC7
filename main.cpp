#include "DynamicMathStack.h"

int main() {
    int catchvar;

    MathStack stack1(2);
    MathStack stack2(9);
    MathStack stack3(20);

    // Testing sum function;
    std::cout << "Pushing 1:\n";
    stack1.push(1);
    std::cout << "Pushing 2:\n";
    stack1.push(2);

    stack1.add();

    std::cout << "The sum is ";
    stack1.pop(catchvar);
    std::cout << catchvar << "\n\n";

    // Testing subtraction function
    std::cout << "Pushing 5:\n";
    stack1.push(5);
    std::cout << "Pushing 10:\n";
    stack1.push(10);

    stack1.sub();

    std::cout << "The difference is ";
    stack1.pop(catchvar);
    std::cout << catchvar << std::endl;

    // Testing  multiplication function
    std::cout << "Pushing 10:\n";
    stack1.push(10);
    std::cout << "Pushing 10:\n";
    stack1.push(10);

    stack1.mult();

    std::cout << "The product is ";
    stack1.pop(catchvar);
    std::cout << catchvar << std::endl;

    // Testing division function
    std::cout << "Pushing 10:\n";
    stack1.push(10);
    std::cout << "Pushing 2:\n";
    stack1.push(2);

    stack1.div();

    std::cout << "The quotient is ";
    stack1.pop(catchvar);
    std::cout << catchvar << std::endl;

    // Testing addAll function
    std::cout << "Pushing 1 through 20:\n";
    for(int i = 0; i < 20; i++) {
        stack3.push(i);
    }

    stack3.addAll();

    std::cout << "The sum of the stack is ";
    stack3.pop(catchvar);
    std::cout << catchvar << std::endl;

    // Testing multAll function
    std::cout << "Pushing even numbers from 1 through 20 (excluding 20):\n";

    for(int i = 2; i < 20; i += 2) {
        stack2.push(i);
    }

    stack2.multAll();

    std::cout << "The total from multiplying each element in the stack is ";
    stack2.pop(catchvar);
    std::cout << catchvar << std::endl;
    return 0;
}