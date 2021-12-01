#include <iostream>

using namespace std;

// Lab_02_09
// Napisz program obliczający wynik dzielenia całkowitego bez reszty dla dwóch liczb całkowitych podanych w konsoli.

int main() {
    int a;
    int b;

    cout << "Podaj wartość a:" << endl;
    cin >> a;
    cout << "Podaj wartość b:" << endl;
    cin >> b;

    cout << a << "/" << b << " = " << a / b << endl;

    return 0;
}
