#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> &arr, int baris, int kolom, int blok) {
    int array = 0;
    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            for(int k = 0; k < kolom; k++) {
                cout << arr[array] << " ";
                array++;
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main() {
    int blok, baris, kolom;

    cout << "Masukkan jumlah blok: ";
    cin >> blok;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    vector<int> arrayTigaDimensi(baris * kolom * blok);

    arrayTigaDimensi = {2, 5, 8, 10, 22, 44, 33, 100, 121, 1214, 224, 11, 35, 324, 3454, 3242, 322};

    printArray(arrayTigaDimensi, blok, baris, kolom);

    return 0;
}