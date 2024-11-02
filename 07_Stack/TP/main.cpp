#include <iostream>
#include "stack.h"

int main() {
    stack S;
    createStack_2311104011(S);
    push_2311104011(S, '!');
    push_2311104011(S, 'G');
    push_2311104011(S, 'N');
    push_2311104011(S, 'U');
    push_2311104011(S, 'D');
    push_2311104011(S, 'N');
    push_2311104011(S, 'A');
    push_2311104011(S, 'B');
    push_2311104011(S, 'O');
    push_2311104011(S, 'L');
    push_2311104011(S, 'A');
    push_2311104011(S, 'H');

    std ::cout << "Isi awal Stack:" << std::endl;
    printStack_2311104011(S);

    std::cout << "Isi setelah pop:" << std::endl;
    for (int i = 0; i < 5; i++) {  
        pop(S);
    }
    printStack_2311104011(S);

    return 0;
}