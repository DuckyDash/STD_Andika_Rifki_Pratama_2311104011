#include <iostream>

using namespace std;

void showArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void swapArray(int arr[3][3], int arr1[3][3], int baris, int kolom) {
    if (baris >= 0 && baris < 3 && kolom >= 0 && kolom < 3) {
        int temp = arr[baris][kolom];
        arr[baris][kolom] = arr1[baris][kolom];
        arr1[baris][kolom] = temp;
        cout << "Pertukaran berhasil di posisi (" << baris << ", " << kolom << ")\n";
    } else {
        cout << "Posisi tidak valid" << endl;
    }
}

void pointSwap(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr1[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    
    cout << "Array 1 sebelum ditukar = " << endl;
    showArray(arr);
    cout << "Array 2 sebelum ditukar = " << endl;
    showArray(arr1);

    int* ptr1 = &arr[3][2];
    int* ptr2 = &arr1[4][2];

    cout << "Sebelum penukaran pointer menunjuk elemen array:" << endl;
    cout << "Pointer 1 menunjuk ke nilai: " << *ptr1 << endl;
    cout << "Pointer 2 menunjuk ke nilai: " << *ptr2 << endl;

    pointSwap(ptr1, ptr2);

    cout << "Setelah penukaran pointer menunjuk elemen array:" << endl;
    cout << "Pointer 1 menunjuk ke nilai: " << *ptr1 << endl;
    cout << "Pointer 2 menunjuk ke nilai: " << *ptr2 << endl;

    cout << "Array 1 setelah penukaran: " << endl;
    showArray(arr);
    cout << "Array 2 setelah penukaran: " << endl;
    showArray(arr1);

    return 0;
}
