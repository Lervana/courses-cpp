#include <iostream>

using namespace std;

// Lab_02_11
// Napisz prosty kalkulator pozwalający na proste operacje na wartościach typu float. Program ma umożliwiać operacje
// takie jak suma, różnica, iloczyn oraz iloraz. Operacja powinna być wybierana z klawiatury - wpisanie odpowiedniego
// znaku (+, -, *, /) definiuje jaką operacje ma wykonać program.

// Przykład działania:
//Podaj wartość A: 1
//Podaj wartość B: 2
//Wybierz operację [+, -, *, /] -
//Wynik: -1

int main() {
    float a;
    float b;
    char op;

    cout << "Podaj wartość A:" << endl;
    cin >> a;
    cout << "Podaj wartość B:" << endl;
    cin >> b;
    cout << "Wybierz operację [+, -, *, /]" << endl;
    cin >> op;

    float result = 0;

    if (op != '+' and op != '-' and op != '/' and op != '*') cout << "Wybrany operator jest niewłaściwy! " << endl;
    else if (op == '+') result = a + b;
    else if (op == '-')result = a - b;
    else if (op == '/')result = a / b;
    else result = a * b;

    cout << "Wynik: " << result << endl;

    return 0;
}
