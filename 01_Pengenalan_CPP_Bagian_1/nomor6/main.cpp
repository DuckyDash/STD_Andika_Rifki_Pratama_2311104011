#include <iostream>

using namespace std;

int main(){
    int a, b, bilangan;
    cout << "Masukan batas atas: ";
    cin >> a;
    cout << "Masukan batas bawah: ";
    cin >> b;
    for (bilangan = a; bilangan <= b; bilangan++){
        cout << "Bilangan " << bilangan << endl;
    }
    return 0;
}
