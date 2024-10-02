#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main() {

    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  
    int arraygenap[] = {}; 
    int arrayganjil[] = {}; 


cout << "Bilangan array: " << endl;
for (int i = 0; i < 10; i++) {
    cout << array[i] << " ";
} cout << endl;
    for (int i = 0; i < 10; i++) {  
        if (array[i] % 2 == 0) {  
            array[i] = arraygenap[i];
            cout << array[i] << " Merupakan bilangan genap!" << endl;
        }
        else {
            array[i] = arrayganjil[i];
            cout << array[i] << " Merupakan bilangan ganjil!" << endl;
        } 
    }

    getch();
    return 0;
}
