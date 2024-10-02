#include <iostream>
using namespace std;

int main() {
    int UkuranArray;

    cout << "Masukkan ukuran array:" << endl;
    cin >> UkuranArray;

    int* array = new int[UkuranArray];

    for (int i = 0; i < UkuranArray; i++) {
        cout << "Masukkan isi array " << " " << i << " = ";
        cin >> array[i];
    }
    int hasil = 0;
    int maxNumber = array[0]; 
    int minNumber = array[0];  
    cout << "Isi array:" << endl;
    for (int i = 0; i < UkuranArray; i++) {
        cout << array[i] << " ";
        cout << " " << endl;
        hasil += array[i];

        if (array[i] > maxNumber) {
            maxNumber = array[i];
        }
        if (array[i] < minNumber) {
            minNumber = array[i];
        }
    }

    double rataRata = static_cast<double>(hasil) / UkuranArray;

    cout << "Hasil total dari nilai array adalah :" << " " << hasil << endl;
    cout << "Nilai maksimum adalah: " << maxNumber << endl;
    cout << "Nilai minimum adalah: " << minNumber << endl;
    cout << "Rata-rata dari nilai array adalah: " << rataRata << endl;

    return 0;
}
