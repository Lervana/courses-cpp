#include <iostream>

using namespace std;

// Lab_02_10
// Napisz program obliczający resztę z dzielenia całkowitego bez reszty dla dwóch liczb całkowitych podanych w konsoli.

int main() {
    int a;
    int b;

    cout << "Podaj wartość a:" << endl;
    cin >> a;
    cout << "Podaj wartość b:" << endl;
    cin >> b;

    const int restA = a - (a / b) * b;
    const int restB = a % b;

    cout << "reszta: " << restA << endl;
    cout << "reszta: " << restB << endl;

    return 0;
}
