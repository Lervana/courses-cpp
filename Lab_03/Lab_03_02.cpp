#include <iostream>
#include <cmath>

using namespace std;

// Lab_03_02
// Napisz program obliczający objętość stożka, po podaniu przez użytkownika wysokości stożka
// oraz średnicy podstawy. Jakiego typu zmienne należy wykorzystać?

int main() {
    double h;
    double d;

    cout << "Wysokość: ";
    cin >> h;
    cout << "Średnica: ";
    cin >> d;

    double r = d / 2;
    double v = (M_PI * pow(r, 2) * h) / 3;

    cout << endl << "Objętość stożka o wysokości " << h << " i średnicy podstawy " << d << " wynosi: " << v;

    return 0;
}
