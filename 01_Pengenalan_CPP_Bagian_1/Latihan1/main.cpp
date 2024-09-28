#include <iostream>

using namespace std;

int main(){
    float bil1, bil2, hasilt, hasilk, hasilx, hasilb;

    cout << "Masukan bilangan pertama : ";
    cin >> bil1;
    cout << "Masukan bilangan kedua :";
    cin >> bil2;

    hasilt = bil1 + bil2;
    hasilk = bil1 - bil2;
    hasilx = bil1 * bil2;
    hasilb = bil1 / bil2;

    cout << " Hasil dari penjumlahan : " << hasilt << endl;
    cout << " Hasil dari pengurangan : " << hasilk << endl;
    cout << " Hasil dari perkalian : " << hasilx << endl;
    cout << " Hasil dari pembagian : " << hasilb << endl;
}
