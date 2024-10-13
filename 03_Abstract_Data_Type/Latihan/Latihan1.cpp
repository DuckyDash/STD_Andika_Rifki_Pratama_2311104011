#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Mahasiswa {
    string  nama;
    char nim[10];
    float uts, tugas, uas, nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float tugas, float uas) {
    return (uts * 0.3) + (tugas * 0.3) + (uas * 0.4);
}

int main() {
    int maxMahasiswa = 10;
    Mahasiswa mahasiswa[maxMahasiswa];
    int jumlahMahasiswa;

    cout << "Masukan jumlah mahasiswa (Maksimal 10): ";
    cin >> jumlahMahasiswa;

    if (jumlahMahasiswa > 10) {
        cout << "Jumlah mahasiswa lebih dari 10!" << endl;
    }

    for (int i = 0; i < jumlahMahasiswa; i++){
        cout << "\nMasukan Mahasiswa ke-" << i + 1 << endl;
        cout << "Masukan Nama Mahasiswa: ";
        cin >> mahasiswa[i].nama;
        cout << "Masukan NIM Mahasiswa: ";
        cin >> mahasiswa[i].nim;
        cout << "Masukan Nilai UTS: ";
        cin >> mahasiswa[i].uts;
        cout << "Masukan Nilai Tugas: ";
        cin >> mahasiswa[i].tugas;
        cout << "Masukan Nilai UAS: ";
        cin >> mahasiswa[i].uas;
        mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].uts, mahasiswa[i].tugas, mahasiswa[i].uas);
    }
    cout << "\n";
    cout << "Data Mahasiswa: " << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "NIM: " << mahasiswa[i].nim << endl;
        cout << "Nilai UTS: " << mahasiswa[i].uts << endl;
        cout << "Nilai Tugas: " << mahasiswa[i].tugas << endl;
        cout << "Nilai UAS: " << mahasiswa[i].uas << endl;
        cout << "Nilai Akhir: " << mahasiswa[i].nilaiAkhir << endl;
        cout << "\n";
    }
    return 0;
    }