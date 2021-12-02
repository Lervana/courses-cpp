#include <iostream>
#include <random>

using namespace std;

// Lab_03_11
//Napisz program, w którym użytkownik zgaduje liczbę losową z przedziału od 0 do 9 generowaną przez komputer.
// Dołącz plik nagłówkowy random.

int main() {
    const int min = 0;
    const int max = 9;

    random_device rd;                                   // Uruchomienie generatora liczb pseudolosowych.
    mt19937 gen(rd());                                  // o nazwie Mersenne Twister
                                                        // [https://pl.wikipedia.org/wiki/Mersenne_Twister]
    uniform_real_distribution<> dist(min, max);         // Zawężenie generowania liczb do wartości 0 - 9

    int generatedNumber = dist(gen);
    int tryNumber;

    cout << "Program wylosował liczbę z zakresu 0 - 9. Jaka to liczba?" << endl;
    cout << "Odpowiedź: ";
    cin >> tryNumber;

    cout
    << "Wylosowana liczba to: " << generatedNumber
    << " -> " << ((tryNumber == generatedNumber) ? "Brawo!" : "Pudło");

    return 0;
}
