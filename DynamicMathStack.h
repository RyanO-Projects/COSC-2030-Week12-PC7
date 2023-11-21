#ifndef DYNAMICMATHSTACK_H
#define DYNAMICMATHSTACK_H
#include <iostream>

class MathStack {
    private :
        int *stackArray;
        int stackSize;
        int top;

    public:
        MathStack(int size) {
            stackSize = size;
            stackArray = new int[stackSize];
            top = -1;
        };

        MathStack(const MathStack &obj) {
            if (obj.stackSize > 0)
                stackArray = new int[obj.stackSize];
            else
                stackArray = nullptr;

            stackSize = obj.stackSize;

            for (int count = 0; count < stackSize; count++)
                stackArray[count] = obj.stackArray[count];
            
            top = obj.top;
        }
        void push(int);
        void pop(int &);
        bool isFull() const;
        bool isEmpty() const;
        void add();
        void sub();
        void mult();
        void div();
        void addAll();
        void multAll();
};

void MathStack::push(int num) {
    if (isFull())
        std::cout << "The stack is full.\n";

    else {
        top++;
        stackArray[top] = num;
    }
}

void MathStack::pop(int &num) {
    if (isEmpty())
        std::cout << "The stack is empty.\n";

    else {
        num = stackArray[top];
        top--;
    }
}

bool MathStack::isFull() const {
    if (top == stackSize -1)
        return true;
    else
        return false; 
}

bool MathStack::isEmpty() const {
    if (top == -1)
        return true;
    else
        return false;
}

void MathStack::add() {
    int num, sum;

    if(stackSize > 1) {
        pop(sum);
        pop(num);
        sum += num;
        push(sum);
    }
    else
        std::cout << "Not enough values in stack.\n";
}

void MathStack::sub() {
    int num, diff;

    if(stackSize > 1) {
        pop(diff);
        pop(num);
        diff -= num;
        push(diff);
    }
    else
        std::cout << "Not enough values in stack.\n";
}

void MathStack::mult() {
    int num, multiplier;

    if(stackSize > 1) {
        pop(num);
        pop(multiplier);
        num *= multiplier;
        push(multiplier);
    }
    else
        std::cout << "Not enough values in stack.\n";
}

void MathStack::div() {
    int num, divisor;

    if(stackSize > 1) {
        pop(num);
        pop(divisor);
        num /= divisor;
        push(divisor);
    }
    else
        std::cout << "Not enough values in stack.\n";
}

void MathStack::addAll() {;
    int sum = 0;

    if(isEmpty()) {
        std::cout << "Not enough values in stack.\n";
        return;
    }
    for (int i = 0; i < stackSize; i++) {
        sum += stackArray[i];
        pop(stackArray[i]);
    }
    push(sum);
}

void MathStack::multAll() {
    int multSum = 1;

    if(isEmpty()) {
        std::cout << "Not enough values in stack.\n";
        return;
    }
    for(int i = 0; i < stackSize; i++) {
        multSum *= stackArray[i];
        pop(stackArray[i]);
    }
    push(multSum);
}

#endif