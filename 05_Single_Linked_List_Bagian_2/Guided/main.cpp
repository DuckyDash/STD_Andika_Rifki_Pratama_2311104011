#include <w
using namespace std;

int main() { 
    List L;
    Elemen* P1, *P2,  *P3,  *P4, *P5 = NULL;
    createlist(L);
}

P1 = alokasi(10);
insertfirst (L, P1);

P2 = alokasi(20);
insertfirst(L, P2);

P3 = alokasi(30);
insertfirst(L, P3);

P4 = alokasi(40);
insertfirst(L, P4);

P5 = alokasi(50);
insertfirst(L, P5);

printinfo(L);

Elemen* found=findElm(L, 20);
if (found != NULL) {
    cout << "Elemen ditemukan: " << found -> data << endl;
} else {
    cout << "Elemen tidak ditemukan" << endl;
}

int total = sumAllElements(L);
cout << "Jumlah semua elemen: " << total << endl;

return 0;

