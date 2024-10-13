#ifndef pelajaran_h
#define pelajaran_h

#include <string>

using namespace std;

struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

pelajaran createPelajaran(string namaMapel, string kodeMapel);
void showPelajaran(pelajaran mapel);