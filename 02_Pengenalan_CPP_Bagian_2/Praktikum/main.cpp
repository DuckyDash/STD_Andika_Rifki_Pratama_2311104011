// #include <iostream>
// #include <conio.h>

// using namespace std;

// int main (){
//     int x, y;
//     int *px;
//     x = 87;
//     px = &x;
//     y = *px;
//     cout << " Alamat x = " << &x << endl;
//     cout << " Isi px = " << px << endl;
//     cout << " Isi X = " << x << endl;
//     cout << " Nilai yang ditunjuk px = " << *px << endl;
//     cout << " Nilai y = " << y << endl;
//     getch ( );
//     return 0;
// }


// #include <iostream>
// #define MAX 5

// using namespace std;

// int main() {
//     int i, j;
//     float nilai_total, rata_rata;
//     float nilai[MAX];
//     static int nilai_tahun[MAX][MAX] = {
//         {0, 2, 2, 0, 0},
//         {0, 1, 1, 1, 0},
//         {0, 3, 3, 3, 0},
//         {4, 4, 0, 0, 4},
//         {5, 0, 0, 0, 5}
//     };

//     // Input nilai
//     for (i = 0; i < MAX; i++) {
//         cout << "Masukan nilai ke-" << i + 1 << ": ";
//         cin >> nilai[i];
//     }

//     // Menampilkan nilai tahunan
//     cout << "\nNilai tahunan:\n";
//     for (i = 0; i < MAX; i++) {
//         for (j = 0; j < MAX; j++) {
//             cout << nilai_tahun[i][j] << " ";
//         }
//         cout << "\n";
//     }

//     // Optional: pause program (windows only)
//     // system("pause");

//     return 0;
// }


#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

// Function prototype declaration
int maks3(int a, int b, int c);

int main() {
    system("cls"); // Clear screen
    int x, y, z;

    // Input three values
    cout << "Masukkan nilai bilangan ke-1 = ";
    cin >> x;
    cout << "Masukkan nilai bilangan ke-2 = ";
    cin >> y;
    cout << "Masukkan nilai bilangan ke-3 = ";
    cin >> z;

    // Output the maximum value
    cout << "Nilai maksimumnya adalah = " << maks3(x, y, z);

    getche(); // Wait for key press
    return 0;
}

// Function to find the maximum of three integers
int maks3(int a, int b, int c) {
    int temp_max = a;  // Initialize temp_max with 'a'
    if (b > temp_max) temp_max = b; // Compare with 'b'
    if (c > temp_max) temp_max = c; // Compare with 'c'
    return temp_max; // Return the maximum value
}



