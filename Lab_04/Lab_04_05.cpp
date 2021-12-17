#include <iostream>

using namespace std;

// Lab_04_05
// Napisz program wypisujący na ekranie prostokąt złożony z gwiazdek, wymiaru m x n.
// Wartości m, n podane przez użytkownika. Zmodyfikuj program by wypisywał kwadrat n x n.
//
// Przykład dla m = 3, n = 4
//
// ****
// ****
// ****

int main() {
    int m, n;

    cout << "Program wypisuje na ekranie prostokąt (m x n) oraz kwadrat (n x n) złożony z gwiazdek." << endl
         << "Podaj wartość m: ";
    cin >> m;

    if(m <= 0) {
        cout << "[Error] m musi być większe od 0";
        return 1;
    }

    cout << "Podaj wartość n: ";
    cin >> n;

    if(n <= 0) {
        cout << "[Error] n musi być większe od 0";
        return 1;
    }

    cout << endl << "Prostokąt:" << endl << endl;

    for(int x = 1; x <= m; x++) {
        for(int y = 1; y <= n; y++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << "Kwadrat:" << endl << endl;

    for(int x = 1; x <= n; x++) {
        for(int y = 1; y <= n; y++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
