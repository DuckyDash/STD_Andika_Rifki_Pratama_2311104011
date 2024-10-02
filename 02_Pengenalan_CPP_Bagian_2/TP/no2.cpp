#include <iostream>

using namespace std;

void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int bil1, bil2;
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bil2;
    cout << "Sebelum ditukar: " << endl;
    cout << "Bilangan pertama: " << bil1 << "Bilangan kedua: " << bil2 << endl;
    tukar(&bil1, &bil2);
    cout << "Setelah pertukaran: " << endl;
    cout << "Bilangan pertama : " << bil1 << "Bilangan kedua: " << bil2 << endl;
    return 0;
}
