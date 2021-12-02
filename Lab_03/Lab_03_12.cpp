#include <iostream>
#include <random>

using namespace std;

// Lab_03_12
// Napisz program wczytujący liczbę całkowitą dodatnią n i wypisujący czy jest ona mniejsza lub równa 10,
// większa od 10 ale mniejsza lub równa 100, większa od 100 ale mniejsza lub równa 1000, większa od 1000.
// Czy można użyć instrukcji switch?

int main() {
    int x;

    cout << "Podaj liczbę całkowitą dodatnią: ";
    cin >> x;

    if(x <= 0) {
        cout << "[Error] Liczba lest mniejsza lub równa 0.";
        return 1;
    }

    switch (x) {
        case 1 ... 10: cout << "Liczba mniejsza lub równa 10"; break;
        case 11 ... 100: cout << "Liczba większa od 10 ale mniejsza lub równa 100"; break;
        case 101 ... 1000: cout << "Liczba większa od 100 ale mniejsza lub równa 1000"; break;
        default: cout << "Liczba większa od 1000"; break;
    }


    return 0;
}
