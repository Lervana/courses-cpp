#include <iostream>

using namespace std;

// Lab_02_03
// Napisz program, który zapyta użytkownika o jego imię, pozwoli na jego wpisanie i następnie je wyświetli na ekranie.

int main() {
    char name[10];

    cout << "Podaj imię: " << endl;
    cin >> name;
    cout << "Cześć " << name << endl;

    return 0;
}
