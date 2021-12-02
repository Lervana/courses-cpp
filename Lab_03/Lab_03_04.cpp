#include <iostream>

using namespace std;

// Lab_03_04
// Napisz program wypisujący tablice logiczne poniższych wyrażeń logicznych.
// 1) p lub q
// 2) p i q
// 3) jeżeli p to q
// 4) p wtedy i tylko wtedy gdy q
// 5) ~(p i q) lub (jeżeli r to p)
//
// Przykład dla (~p):
// ~p
//
// | p | ~p |
// ----------
// | 0 |  1 |
// | 1 |  0 |


int main() {
    cout << "Tablica prawdy dla [~p]" << endl;
    cout << "| p | ~p |" << endl;
    cout << "----------" << endl;
    cout << "| 0 |  1 |" << endl;
    cout << "| 1 |  0 |" << endl << endl;

    cout << "Tablica prawdy dla [p lub q]" << endl;
    cout << "| p | q | p lub q |" << endl;
    cout << "-------------------" << endl;
    cout << "| 0 | 0 |    0    |" << endl;
    cout << "| 0 | 1 |    1    |" << endl;
    cout << "| 1 | 0 |    1    |" << endl;
    cout << "| 1 | 1 |    1    |" << endl << endl;

    cout << "Tablica prawdy dla [p i q]" << endl;
    cout << "| p | q | p i q |" << endl;
    cout << "-----------------" << endl;
    cout << "| 0 | 0 |   0   |" << endl;
    cout << "| 0 | 1 |   0   |" << endl;
    cout << "| 1 | 0 |   0   |" << endl;
    cout << "| 1 | 1 |   1   |" << endl << endl;

    cout << "Tablica prawdy dla [p => q]" << endl;
    cout << "| p | q | p => q |" << endl;
    cout << "-----------------" << endl;
    cout << "| 0 | 0 |   1    |" << endl;
    cout << "| 0 | 1 |   1    |" << endl;
    cout << "| 1 | 0 |   0    |" << endl;
    cout << "| 1 | 1 |   1    |" << endl << endl;

    cout << "Tablica prawdy dla [p <=> q]" << endl;
    cout << "| p | q | p <=> q |" << endl;
    cout << "-------------------" << endl;
    cout << "| 0 | 0 |    1    |" << endl;
    cout << "| 0 | 1 |    0    |" << endl;
    cout << "| 1 | 0 |    0    |" << endl;
    cout << "| 1 | 1 |    1    |" << endl << endl;

    cout << "Tablica prawdy dla [~(p i q) lub (jeśli r to p)]" << endl;
    cout << "| p | q | r | A: p i q | B: ~(A) | C: r => p | B lub C: ~(p i q) lub (r => p) |" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "| 0 | 0 | 0 |     0    |    1    |     1     |                1               |" << endl;
    cout << "| 0 | 1 | 0 |     0    |    1    |     1     |                1               |" << endl;
    cout << "| 0 | 0 | 1 |     0    |    1    |     0     |                1               |" << endl;
    cout << "| 0 | 1 | 1 |     0    |    1    |     0     |                1               |" << endl;
    cout << "| 1 | 0 | 0 |     0    |    1    |     1     |                1               |" << endl;
    cout << "| 1 | 1 | 0 |     1    |    0    |     1     |                1               |" << endl;
    cout << "| 1 | 0 | 1 |     0    |    1    |     1     |                1               |" << endl;
    cout << "| 1 | 1 | 1 |     1    |    0    |     1     |                1               |" << endl;

    return 0;
}
