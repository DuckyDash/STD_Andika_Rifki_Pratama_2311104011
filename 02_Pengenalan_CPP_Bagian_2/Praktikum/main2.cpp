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
