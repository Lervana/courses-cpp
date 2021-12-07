#include <iostream>

using namespace std;

// Lab_04_02
// Wykorzystując pętlę do ... while napisz program wypisujący sumę liczb całkowitych z zakresu od 1 do n,
// gdzie n jest podane przez użytkownika. Zmodyfikuj program tak by możliwe było wpisanie jako n
// wartości ujemnych lub zera.

int main() {
    int n;
    int x = 0;
    int result = x;

    cout << "Program oblicza sumę liczb całkowitych z zakresu 1 do n." << endl
         << "Podaj wartość n: ";
    cin >> n;

    do {
        if(n < 0) x--;
        else if(n > 0) x++;

        result += x;
    } while (n != x);

    cout << "Suma: " << result;

    return 0;
}
