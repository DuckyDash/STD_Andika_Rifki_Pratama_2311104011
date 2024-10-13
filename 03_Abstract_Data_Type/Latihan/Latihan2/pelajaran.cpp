#include "pelajaran.h"
#include <iostream>

pelajaran createPelajaran(string namaMapel, string kodeMapel) {
    pelajaran mapel;
    mapel.namaMapel = namaMapel;
    mapel.kodeMapel = kodeMapel;
    return mapel;
}
void showPelajaran(pelajaran mapel) {
    cout << "Nama Mata Pelajaran: " << mapel.namaMapel << endl;
    cout << "Kode Mata Pelajaran: " << mapel.kodeMapel << endl;
}