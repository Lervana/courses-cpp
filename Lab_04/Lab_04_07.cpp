#include <iostream>
#include <random>

using namespace std;

// Lab_04_07
// Napisz program odgadujący wiek użytkownika przez komputer. Użytkownik odpowiada tylko TAK/NIE.

int main() {
    int min = 1;
    int max = 100;
    string answer;

    random_device rd;
    mt19937 gen(rd());

    while(true) {
        uniform_real_distribution<> dist(min, max);
        int generatedNumber = dist(gen);

        cout << "Czy twój wiek to: " << generatedNumber << endl;
        cout << "Odpowiedź [TAK/NIE]: ";
        cin >> answer;

        while (answer != "TAK" && answer != "NIE") {
            cout << "Odpowiedź [TAK/NIE]: ";
            cin >> answer;
        }

        if(answer == "TAK") return 0;
        else {
            cout << "Czy twój wiek jest wyższy niż: " << generatedNumber << endl;
            cout << "Odpowiedź [TAK/NIE]: ";
            cin >> answer;

            while (answer != "TAK" && answer != "NIE") {
                cout << "Odpowiedź [TAK/NIE]: ";
                cin >> answer;
            }

            if(answer == "TAK") min = generatedNumber;
            else max = generatedNumber;

            if(min == max) {
                cout << "Program nie zdołał odgadnac wieku. Prawdopodbnie chociaż raz odpowiadzieno nieprawdą.";
                return 0;
            }
        }
    }
}
