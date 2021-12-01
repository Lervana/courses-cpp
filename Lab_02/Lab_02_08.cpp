#include <iostream>
#include <iomanip>

using namespace std;

// Lab_02_08
// Napisz program, który oblicza pole prostokąta. Wartości boków a i b wprowadzane są z klawiatury.
// Zmienne reprezentujące wprowadzane wartości powinny być typu float. Wynik należy wyświetlić
// z dokładnością dwóch miejsc po przecinku.

int main() {
    float a;
    float b;
    float pole;

    cout << "Obliczanie pola prostokąta" << endl;
    cout << "Podaj bok A" << endl;
    cin >> a;
    cout << "Podaj bok B:" << endl;
    cin >> b;

    pole = a * b;

    cout << "Pole: " << setprecision(2) << fixed << pole << endl;

    return 0;
}
