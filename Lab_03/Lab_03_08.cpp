#include <iostream>
#include <cmath>

using namespace std;

// Lab_03_08
// Napisz aplikację pozwalającą na wylosowanie początkowego zamku w grze Heroes III.

int main() {
    const string castles[] = {
            "Zamek",
            "Bastion",
            "Forteca",
            "Inferno",
            "Nekropolia",
            "Loch",
            "Twierdza",
            "Cytadela",
            "Wrota Żywiołów"
    };


    const int randomIndex = rand() % 9; // NOLINT(cppcoreguidelines-narrowing-conversions)
    cout << "Dzisiaj grasz frakcją: " << castles[randomIndex] << endl;

    return 0;
}
