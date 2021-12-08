#include <iostream>

using namespace std;

// Lab_05

string lab_05_01() {
    return "Zadanie 05_01";
}

string lab_05_02() {
    return "Zadanie 05_02";
}

string lab_05_03() {
    return "Zadanie 05_03";
}

int getOption(const string descriptions[], const int descriptionsCount) {
    int result;

    cout << "Program pozwala na wykonanie różnych funkcji." << endl
         << "Możliwe opcje to:" << endl;

    for(int x = 0; x < descriptionsCount; x++) {
        cout << "[" << x + 1 << "] " << descriptions[x] << endl;
    }

    cout << "Proszę wybrać opcję: ";
    cin >> result;

    return result;
}

string executeExercise(int option) {
    switch (option) {
        case 1: return lab_05_01();
        case 2: return lab_05_02();
        case 3: return lab_05_03();
        default: return "Wybrana funkcja nie została poprawnie przypisana";
    }
}

void logExercise(int option, const string& description) {
    string result = executeExercise(option);
    static const string line = "-----------------------------------";

    cout << line << endl
         << "#Lab_05_" << (option < 10 ? "0" : "")  << option << endl
         << description << endl << endl
         << "Wynik: " << result << endl
         << line << endl;
}

int main() {
    static const string descriptions[] = {
            "Przykładowy opis zadania nr 1",
            "Przykładowy opis zadania nr 2",
            "Przykładowy opis zadania nr 3"
    };

    static const int descriptionsCount = sizeof(descriptions)/sizeof(descriptions[0]);

    while(true) {
        const int option = getOption(descriptions, descriptionsCount);

        if(option == 0) {
            cout << "Podano 0 - program kończy działanie";
            return 0;
        } else {
            logExercise(option, descriptions[option - 1]);
        }
    }
}
