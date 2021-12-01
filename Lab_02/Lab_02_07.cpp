#include <iostream>

using namespace std;

// Lab_02_07
// Porównaj trzy różne liczby podawane z konsoli (a, b, c) następnie wypisz je w kolejności rosnącej.
// Napisz program w trzech wersjach:
// A) Używając jedynie instrukcji if oraz else, nie modyfikując posiadanych wartości a, b, c oraz nie tworząc
// dodatkowych zmiennych (proste wyświetlanie wyniku w zależności od wartości a, b, c);
// B) [Wymagana znajomość tablic] Tworząc tablicę z wartości a, b, c i sortując elementy w tablicy za pomocą
// jedynie instrukcji if oraz else. Należy utworzyć zmienną pomocniczą do przechowywania wartości - np. memory.
// C) [Wersja zaawansowana] Użyj predefiniowanej metody do posortowania wartości w tablicy.

int main() {
    int a;
    int b;
    int c;

    cout << "Podaj wartość A:" << endl;
    cin >> a;
    cout << "Podaj wartość B:" << endl;
    cin >> b;
    cout << "Podaj wartość C:" << endl;
    cin >> c;

    // Wersja A
    if (a < b and a < c) {
        if (b < c) cout << "Wynik wersja A: " << a << b << c << endl;
        else cout << "Wynik wersja A: " << a << c << b << endl;
    } else if (b < a and b < c) {
        if (b < c) cout << "Wynik wersja A: " << b << a << c << endl;
        else cout << "Wynik wersja A: " << b << c << a << endl;
    } else {
        if (a < b) cout << "Wynik wersja A: " << c << a << b << endl;
        else cout << "Wynik wersja A: " << c << b << a << endl;
    }

    // Wersja B
    int numbers[3] = {a, b, c};
    int memory;

    if (numbers[0] > numbers[1]) {
        memory = numbers[0];
        numbers[0] = numbers[1];
        numbers[1] = memory;
    }

    if (numbers[1] > numbers[2]) {
        memory = numbers[2];
        numbers[2] = numbers[1];
        numbers[1] = memory;
    }

    if (numbers[0] > numbers[1]) {
        memory = numbers[0];
        numbers[0] = numbers[1];
        numbers[1] = memory;
    }

    cout << "Wynik wersja B: " << numbers[0] << numbers[1] << numbers[2] << endl;

    // Wersja C
    int numbersC[3] = {a, b, c};
    sort(numbersC, numbersC + 3);

    cout << "[C] Po: " << numbersC[0] << numbersC[1] << numbersC[2] << endl;

    return 0;
}
