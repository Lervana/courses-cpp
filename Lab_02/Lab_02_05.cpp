#include <iostream>

using namespace std;

// Lab_02_05
// Na podstawie pseudokodu z zadania Lab_01_04 napisz program.

int main() {
    int x;

    cout << "Podaj wartość:" << endl;
    cin >> x;

    int result;

    if(x >= 0) result = x;
    else result = -x;

    cout << "Wynik: " << result << endl;

    return 0;
}
