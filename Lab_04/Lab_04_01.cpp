#include <iostream>

using namespace std;

// Lab_04_01
// Napisz program, który to w zależności od podanej opcji (switch) wykona co następuje:
// - Wypisze 20 znaków * w jednej linii.
// - Wypisze n znaków * w jednej linii, gdzie n jest podane przez użytkownika.
// - Wypisze liczby całkowite od 1 do n, gdzie n jest podane przez użytkownika.
// - Wypisze liczby całkowite od n do 1, gdzie n jest podane przez użytkownika.
// - Wypisze parzyste liczby całkowite z zakresu od 1 do n, gdzie n jest podane przez użytkownika.

int main() {
    short int option;

    cout << "W zależności od podanej opcji program wykona co następuje:" << endl
         << "[1] Wypisze 20 znaków * w jednej linii." << endl
         << "[2] Wypisze n znaków * w jednej linii, gdzie n jest podane przez użytkownika." << endl
         << "[3] Wypisze liczby całkowite od 1 do n, gdzie n jest podane przez użytkownika." << endl
         << "[4] Wypisze liczby całkowite od n do 1, gdzie n jest podane przez użytkownika." << endl
         << "[5] Wypisze parzyste liczby całkowite z zakresu od 1 do n, gdzie n jest podane przez użytkownika." << endl
         << endl
         << "Podaj opcję: ";

    cin >> option;

    switch (option) {
        case 1: {
            for(int x = 0; x < 20; x++) cout << "*";
        } break;
        case 2: {
            int input;

            cout << "Podaj ilość gwiazdek: ";
            cin >> input;

            for(int x = 0; x < input; x++) cout << "*";
        } break;
        case 3: {
            int input;

            cout << "Podaj ilość liczb do wypisania: ";
            cin >> input;

            for(int x = 1; x <= input; x++) cout << x << " ";
        } break;
        case 4: {
            int input;

            cout << "Podaj ilość liczb do wypisania: ";
            cin >> input;

            for(int x = input; x > 0; x--) cout << x << " ";
        } break;
        case 5: {
            int input;

            cout << "Podaj ilość liczb do wypisania: ";
            cin >> input;

            for(int x = 1; x <= input; x++) {
                if(x % 2 == 0) cout << x << " ";
            }
        } break;
        default: {
            cout << "Opcja niezaimplementowana";
        } break;
    }

    cout << endl;

    return 0;
}
