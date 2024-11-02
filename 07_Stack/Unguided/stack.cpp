#include <iostream>
#include "stack.h"
using namespace std;

void createStack_2311104011(Stack &S) {
  S.top = -1;
}

void push_2311104011(Stack &S, infotype x) {
  if (S.top < MAX - 1) {
    S.top++;
    S.info[S.top] = x;
  } else {
    cout << "Stack penuh!" << endl;
  }
}

infotype pop_2311104011(Stack &S) {
  if (S.top >= 0) {
    infotype temp = S.info[S.top];
    S.top--;
    return temp;
  } else {
    cout << "Stack kosong!" << endl;
    return -1;
  }
}

void printInfo_2311104011(const Stack &S) {
  if (S.top >= 0) {
    cout << "[TOP] ";
    for (int i = S.top; i >= 0; i--) {
      cout << S.info[i] << " ";
    }
    cout << endl;
  } else {
    cout << "Stack kosong!" << endl;
  }
}

void balikStack_2311104011(Stack &S) {
  Stack temp;
  createStack_2311104011(temp);
  
  while (S.top >= 0) {
    push_2311104011(temp, pop_2311104011(S));
  }

  S = temp;
}

void pushAscending_2311104011(Stack &S, infotype x) {
  Stack temp;
  createStack_2311104011(temp);

  while (S.top >= 0 && S.info[S.top] > x) {
    push_2311104011(temp, pop_2311104011(S));
  }

  push_2311104011(S, x);

  while (temp.top >= 0) {
    push_2311104011(S, pop_2311104011(temp));
  }
}

void getInputStream_2311104011(Stack &S) {
  cout << "Masukkan angka (tekan Enter untuk selesai): ";
  char input;
  while (cin.get(input) && input != '\n') {
    if (S.top < MAX - 1) {
      push_2311104011(S, input - '0');
    } else {
      cout << "Stack penuh!" << endl;
      break;
    }
  }
}