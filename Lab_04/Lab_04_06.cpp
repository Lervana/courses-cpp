#include <iostream>

using namespace std;

// Lab_04_06
// Napisz program wypisujący trójkąty wymiaru n x n złożone z gwiazdek (połówki kwadratu do przekątnej).
// Wartość n podana przez użytkownika. Rozważ wszystkie możliwe rodzaje trójkątów.
//
// Przykład dla n=3:
//
// *
// **
// ***
//
// ***
// **
// *
//
//   *
//  **
// ***
//
// ***
//  **
//   *

int main() {
    int n;

    cout << "Program wypisuje na ekranie trójkąty wymiaru n x n złożone z gwiazdek." << endl
         << "Podaj wartość n: ";
    cin >> n;

    if(n <= 0) {
        cout << "[Error] n musi być większe od 0";
        return 1;
    }

    for(int y = 1; y <= n; y++) {
        for(int x = 1; x <= y; x++) cout << "*";
        cout << endl;
    }

    cout << endl;

    for(int y = 1; y <= n; y++) {
        const int count = n - (y -1);
        for(int x = 1; x <= count; x++) cout << "*";
        cout << endl;
    }

    cout << endl;

    for(int y = 1; y <= n; y++) {
        const int starStartIndex = n - y  + 1;
        for(int x = 1; x <= n; x++) cout << (x < starStartIndex ? " " : "*") ;
        cout << endl;
    }

    cout << endl;

    for(int y = 1; y <= n; y++) {
        for(int x = 1; x <= n; x++) cout << (x < y ? " " : "*");
        cout << endl;
    }

    cout << endl;

    return 0;
}
