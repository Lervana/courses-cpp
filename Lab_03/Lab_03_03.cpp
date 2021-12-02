#include <iostream>

using namespace std;

// Lab_03_03
// Napisz program pozwalający na wykonanie poniższych działań na liczbach całkowitych. Wartości zmiennych
// a, b, c, d użytkownik wprowadza z klawiatury. Następnie wprowadza numer wzoru do użycia
// (wybór odbywa się za pomocą instrukcji switch).
//
// 1. ab\over b + a
// 2. a + b \over {a \over d} - d
// 3. {{ a - b \over {b \over c} + d}} + {1 \over a}
// 4. {a + { c \over d} \over {b \over c} + d} - {d + 1 \over 1 - {a \over b}} \cdot (-c)

int main() {
    // Wrsja uproszczona bez wprowadzania danych z klawiatury
    double a, b, c, d;
    int option;

//    cout << "a: ";
//    cin >> a;
//
//    cout << "b: ";
//    cin >> b;
//
//    cout << "c: ";
//    cin >> c;
//
//    cout << "d: ";
//    cin >> d;
//
//    cout << "Podaj numer operacji: ";
//    cin >> option;

    a = 10;
    b= 2;
    c = 5;
    d = 7;

    option = 4;

    switch (option) {
        case 1:
            cout << (a * b) / (b + a);
            break;
        case 2:
            cout << (a + b) / ((a / d) - d);
            break;
        case 3:
            cout << ((a - b) / ((b / c) + d)) + (1 / a);
            break;
        case 4:
            cout << ((a + (c / d)) / ((b / c) + d)) - ((d + 1) / (1 - (a / b))) * (-c) ;
            break;
        default:
            cout << "Opcja niezaimplementowana";
            break;
    };

    return 0;
}
