#include <iostream>

using namespace std;

// Lab_03_07
// Bazując na jednostkach z gry Heroes III napisz program pozwalający na uzyskanie informacji jakiego poziomu
// jest dana jednostka. Ogranicz się do trzech zamków i jedynie jednostek podstawowych. Użyj instrukcji switch.
// Przykład działania:

int main() {
    int castle;
    int lvl;

    const string castles[] = { "Nekropolia", "Loch", "Zamek" };
    const string necropolis[] = { "szkielet", "ożywieniec", "zjawa", "wampir", "lisz", "czarny rycerz", "kościany smok" };
    const string dungeon[] = { "troglodyta", "harpia", "złe oko", "meduza", "minotaur", "mantykora", "czerwony smok"  };
    const string town[] = { "pikinier", "łucznik", "gryf", "zbrojny", "mnich", "kawalerzysta", "anioł" };

    cout
    << "Dostępne zamki" << endl
    << "[1] " << castles[0] << endl
    << "[2] " << castles[1] << endl
    << "[3] " << castles[2] << endl
    << "Podaj numer zamku: ";
    cin >> castle;

    if(castle < 1 || castle > 3) cout << "[Error] Wybrano niepoprawny indeks zamku";
    else {
        cout << "Wybierz poziom jednostki [1 - 7]: ";
        cin >> lvl;

        if(lvl < 1) cout << "[Error] Poziom jednostki nie może być niższy niż 1";
        else if(lvl > 7) cout << "[Error] Poziom jednostki nie może być wyższy niż 7";
        else {
            const int creatureIndex = lvl - 1;
            string creature;

            switch (castle) {
                case 1: creature = necropolis[creatureIndex]; break;
                case 2: creature = dungeon[creatureIndex]; break;
                case 3: creature = town[creatureIndex]; break;
                default: cout << "[Error] Jednostka nieodnaleziona"; break;
            }

            cout
            << "W zamku typu " << castles[castle - 1]
            << " jednostką na poziomie " << lvl
            << " jest " << creature << ".";
        }
    }

    return 0;
}
