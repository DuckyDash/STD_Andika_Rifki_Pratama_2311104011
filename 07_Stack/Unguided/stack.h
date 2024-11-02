#ifndef STACK_H
#define STACK_H

const int MAX = 20;
typedef int infotype;

struct Stack {
  infotype info[MAX];
  int top;
};

void createStack_2311104011(Stack &S);
void push_2311104011(Stack &S, infotype x);
infotype pop_2311104011(Stack &S);
void printInfo_2311104011(const Stack &S);
void balikStack_2311104011(Stack &S);
void pushAscending_2311104011(Stack &S, infotype x);
void getInputStream_2311104011(Stack &S);

#endif