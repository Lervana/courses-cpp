#include <iostream>

using namespace std;

// Lab_03_01
// Jakie wartości przyjmą zmienne c i d po wykonaniu poniższego fragmentu kodu.
//
//      int a=2, b=3;
//      c = (a++) + (b++);
//      a=2; b=3;
//      d = (++a) + (++b);
//
// Wyjaśnij odpowiedź.

int main() {
    int a=2, b=3;                   // a = 2; b = 3
    int c = (a++) + (b++);          // a = 2; b = 3; c = 5
                                    // a = 3; b = 4; c = 5
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;

    // a++ oznacza zwiększenie wartości po wykonaniu przypisania do c

    a=2; b=3;                       // a = 2; b = 3
    int d = (++a) + (++b);          // a = 3; b = 4; c = 9

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "d: " << d << endl;

    // ++a oznacza zwiększenie wartości po wykonaniu przypisania do c

    const int x = (++a)++;
    cout << "x: " << x << endl;

    return 0;
}
