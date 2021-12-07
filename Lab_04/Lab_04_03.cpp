#include <iostream>

using namespace std;

// Lab_04_03
// Napisz program wypisujący iloczyn dodatnich liczb całkowitych z zakresu od 1 do n,
// gdzie n jest podane przez użytkownika. Sprawdź zakres wyników. Jakiego typu zmiennych
// należy użyć? Jaką funkcję matematyczną oblicza ten program?

int main() {
    long long int result = 1;
    int n;

    cout << "Program oblicza silnię -> n!." << endl
         << "Podaj wartość x: ";
    cin >> n;

    for(int x = 1; x <= n; x++) result *= x;

    cout << "n! = " << result;

    return 0;
}
