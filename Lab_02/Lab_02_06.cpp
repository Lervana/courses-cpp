#include <iostream>

using namespace std;

// Lab_02_06
// Wczytaj dwie liczby z konsoli a, b oraz sprawdź która z nich jest większa (mogą być równe).

int main() {
    int a;
    int b;

    cout << "Podaj wartość A:" << endl;
    cin >> a;
    cout << "Podaj wartość B:" << endl;
    cin >> b;

    // Wersja if
    if (a == b) cout << "Liczby są równe" << endl;
    if (a > b) cout << "A jest większe od B" << endl;
    if (a < b) cout << "B jest większe od A" << endl;

    // Wersja if ... else
    if (a == b) {
        cout << "Liczby są równe" << endl;
    } else if (a > b) {
        cout << "A jest większe od B" << endl;
    } else {
        cout << "B jest większe od A" << endl;
    }

    return 0;
}

