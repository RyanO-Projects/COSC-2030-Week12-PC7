#ifndef DYNAMICMATHSTACK_H
#define DYNAMICMATHSTACK_H
#include "IntStack.h"

class MathStack : public IntStack {
    public:
        MathStack(int s) : IntStack(s) {}

        void add();
        void sub();
        void mult();
        void div();
        void addAll();
        void multAll();
};

void MathStack::add() {
    int num, sum;

    pop(sum);
    pop(num);

    sum += num;

    push(sum);
}

void MathStack::sub() {
    int num, diff;

    pop(diff);
    pop(num);

    diff -= num;

    push(diff);
}

void MathStack::mult() {
    int num, multiplier;

    pop(num);
    pop(multiplier);

    num *= multiplier;

    push(multiplier);
}

void MathStack::div() {
    int num, divisor;

    pop(num);
    pop(divisor);

    num /= divisor;

    push(divisor);
}

void MathStack::addAll() {
    int *stackCopy = new int[stackSize];
}

#endif