#include <iostream>
#include <cstdio>

using namespace std;

// Lab_03_06
// Co wypisze program po naciśnięciu klawiszy: a b c?
// Dlaczego i jak go poprawić by działał dobrze?

int main() {
    char c = getchar();

    switch(c){
        case 'a': cout << "a";
        case 'b': cout << "b"; default: cout << "?";
    }

    // Poprawione
    cout << endl << endl << "Poprawione:" << endl;

    switch(c){
        case 'a': cout << "a"; break;
        case 'b': cout << "b"; break;
        default: cout << "?";
    }

    return 0;
}
