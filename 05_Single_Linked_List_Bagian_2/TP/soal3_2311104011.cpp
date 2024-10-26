#include <iostream>
#include <algorithm>

using namespace std;

void insertSorted_2311104011(int L[], int& size, int P) {
    bool found = false;
    int R = 0, Prev = -1;

    while (!found && R < size) {
        if (L[R] >= P) {
            found = true;
        } else {
            Prev = R;
            R++;
        }
    }
    for (int i = size; i > R; i--) {
        L[i] = L[i - 1];
    }
    L[R] = P;
    size++;
}
int main() {
    int L[100];
    int size = 0;
    int num, P;

    for (int i = 0; i < 4; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        L[size] = num;
        size++;
    }

    sort(L, L + size);

    cout << "Initial sorted list: ";
    for (int i = 0; i < size; i++) {
        cout << L[i] << " ";
    }
    cout << endl;

    cout << "Enter the element to insert: ";
    cin >> P;

    insertSorted_2311104011(L, size, P);

    cout << "List after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << L[i] << " ";
    }
    cout << endl;

    return 0;
}