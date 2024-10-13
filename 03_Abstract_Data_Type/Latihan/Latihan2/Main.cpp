#include <iostream>
#include "pelajaran.h"

using namespace std;

int main() {
    string namaMapel = "Struktur Data";
    string kodeMapel = "STD";

    pelajaran mapel = createPelajaran(namaMapel, kodeMapel);

    showPelajaran(mapel);

    return 0;
}