#include <iostream>

using namespace std;

// Lab_03_05
// Napisz program wczytujący liczbę całkowitą n i wypisujący czy jest ona ujemna,
// równa zero czy dodatnia. Jakiego typu należy użyć? Czy można użyć instrukcji switch?

int main() {
    int x;

    cout << "Podaj liczbę całkowitą: ";
    cin >> x;

    if(x < 0) cout << "Liczba " << x << " jest ujemna.";
    else if(x == 0) cout << "Liczba jest równa 0.";
    else cout << "Liczba " << x << " jest dodatnia.";

    return 0;
}
