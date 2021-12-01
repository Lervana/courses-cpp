#include <iostream>

using namespace std;

// Lab_02_02
// Zdefiniuj i zainicjuj dwie zmienne, pierwsza ma być wartością całkowitą, druga stałą z wartością „X”.
// Następnie wyświetl je w dwóch liniach. Teraz do pierwszej zmiennej przypisz inną wartość i wyświetl ją.
// Czy do zmiennej stałej można przypisać nową wartość?

int main() {
    int a = 1;
    const char b = 'X';

    cout << a << endl;
    cout << b << endl;

    a = 4;

    cout << a << endl;

    // Poniższa linia nie wykona się poniewż nie można przypisać nowej wartości do zmiennej oznaczonej jako const
    // b = 'Z';

    return 0;
}
