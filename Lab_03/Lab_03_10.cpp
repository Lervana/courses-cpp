#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Lab_03_10
// Napisz program, który z wykorzystaniem instrukcji wyboru switch obliczy pierwiastki równania kwadratowego
// ax^2 + bx + c = 0, gdzie zmienne a, b, c to liczby rzeczywiste wprowadzone z klawiatury. Dla zmiennych
// a, b, c, x1 oraz x2 należy przyjąć format ich wyświetlania z dokładnością do dwóch miejsc po przecinku.

int main() {
    float a, b, c, delta, x1, x2;
    int n;

    cout << ">> Program oblicza pierwiastki równania kwadratowego dla dowolnych współczynników a, b, c <<" << endl << endl;
    cout << "Podaj a: ";
    cin >> a;

    if(a == 0) {
        cout << endl << "[Error] Niepoprawna wartość współczynnika a [0]." << endl;
        return 1;
    }

    cout << "Podaj b: ";
    cin >> b;
    cout << "Podaj c: ";
    cin >> c;
    cout << endl;

    cout << fixed << setprecision(2);

    cout << "Dla wprowadzonych liczb:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    delta = b * b - 4 * a * c;

    if(delta < 0) n = 0;
    else if(delta == 0) n = 1;
    else n = 2;

    switch (n) {
        case 0: {
            cout << "brak pierwiastków rzeczywistych." << endl;
        } break;
        case 1: {
            x1 = -b / (2 * a);
            cout << "występuje jeden pierwiastek podwójny -> x1 = " << x1 << endl;
        } break;
        default: {
            float sqrtDelta = sqrt(delta);
            x1 = (-b - sqrtDelta) / (2 * a);
            x2 = (-b + sqrtDelta) / (2 * a);
            cout << "występują dwa pierwiastki -> x1 = " << x1 << " i x2 = " << x2 << endl;
        }
    }

    return 0;
}
