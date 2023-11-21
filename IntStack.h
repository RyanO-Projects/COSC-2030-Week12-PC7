#ifndef INTSTACK_H
#define INTSTACK_H
#include <iostream>

class IntStack {
    private:
        int *stackArray;
        int stackSize;
        int top;

    public:
        IntStack(int size) {
            stackArray = new int[size];
            stackSize = size;
            top = -1;
        };

        IntStack(const IntStack &obj) {
            if (obj.stackSize > 0)
                stackArray = new int[obj.stackSize];
            else
                stackArray = nullptr;
            
            stackSize = obj.stackSize;

            for (int count = 0; count < stackSize; count++)
                stackArray[count] = obj.stackArray[count];
            
            top = obj.top;
        };

        int getStackSize() const {
            return stackSize;
        };

        ~IntStack() {
            delete [] stackArray;
        };

        void push(int);
        void pop(int &);
        bool isFull() const;
        bool isEmpty() const;
};

void IntStack::push(int num) {
    if (isFull())
        std::cout << "The stack is full.\n";

    else {
        top++;
        stackArray[top] = num;
    }
}

void IntStack::pop(int &num) {
    if (isEmpty())
        std::cout << "The stack is empty.\n";

    else {
        num = stackArray[top];
        top--;
    }
}

bool IntStack::isFull() const {
    if (top == stackSize -1)
        return true;
    else
        return false; 
}

bool IntStack::isEmpty() const {
    if (top == -1)
        return true;
    else
        return false;
}
#endif