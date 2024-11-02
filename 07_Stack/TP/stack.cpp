#include <iostream>
#include "stack.h"

void createStack_2311104011(stack &S) {
    S.Top = 0;
}

bool isEmpty_2311104011(stack S) {
    return S.Top == 0;
}

bool isFull_2311104011(stack S) {
    return S.Top == 15;
}

void push_2311104011(stack &S, infotype x) {
    if (!isFull_2311104011(S)) {
        S.info[S.Top - 1] = x;
        S.Top++;
    }
}

infotype pop(stack &S) {
    if (!isEmpty_2311104011(S)) {
        infotype x = S.info[S.Top - 1];
        S.Top--;
        return S.info[S.Top];
    }
    return '\0';
}

void printStack_2311104011(stack S) {
    for (int i = S.Top - 1; i >= 0; i--) {
        std::cout << S.info[i] << " ";
    }
    std::cout << std::endl;
}
