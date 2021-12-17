#include <iostream>

using namespace std;

// Lab_04_04
// Za pomocą pętli for wypisz liczby całkowite od –n do n, po podaniu wartości n.

int main() {
    int n;

    cout << "Program wypisuje liczby od -n do n." << endl
         << "Podaj wartość n: ";
    cin >> n;

    if(n < 0) cout << "[Error] Podano wartość ujemną.";

    for(int x = -n; x <= n; x++) cout << x << endl;

    return 0;
}
