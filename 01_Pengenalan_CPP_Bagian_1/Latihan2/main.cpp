#include <iostream>
#include <string>

using namespace std;

string NumbToWord(int angka) {
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh",
                       "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

    if (angka < 20) {
        return satuan[angka];

    } else if (angka < 100){
        int BilPul = angka / 10;
        int BilSat = angka % 10;
        if (BilSat == 0) {
            return puluhan[BilPul];
        } else {
            return puluhan[BilPul] + " " + satuan[BilPul];
        }
    }
    else if (angka == 100) {
        return "seratus";
    }

    return "";
}

int main() {
    int angka;
    cout << "Masukkan angka di antara 0-100: ";
    cin >> angka;

    if (angka >= 0 && angka <= 100) {
        cout << "Dalam kata: " << NumbToWord(angka) << endl;
    } else if (angka > 100){
        cout << "Kelebihan mang!" << endl;
    } else {
    cout << "Angka invalid!" << endl;
    }

    return 0;
}
