#include <iostream>
#include <cmath>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"

using namespace std;

// Lab_05
// Funkcje pomocnicze

string logError(const string& message) {
    cout << RED << "[Error] " << message << RESET << endl;
    return "0";
}

string logInfo(const string& message) {
    cout << GREEN << message << RESET << endl;
    return "0";
}

string logResult(const string& message) {
    cout << BLUE << message << RESET << endl;
    return "0";
}

// Zadania
string lab_05_01(int min, int max, bool isSilent = false) {
    if(min < 0) return logError("Podana wartość minimalna jest mniejsza niż 0");
    else if(max < min) return logError("Podana wartość maksymalna jest mniejsza niż minimalna");
    else {
        int generatedNumber = (rand() % (max - min + 1)) + min;

        !isSilent &&
            cout << "Min: " << min << endl
                 << "Max: " << max << endl
                 << "Wylosowana liczba to: " << generatedNumber << endl << endl;

        return to_string(generatedNumber);
    }
}

string lab_05_02(char start, char stop) {
    const int min = (unsigned char)(int)start;
    const int max = (unsigned char)(int)stop;

    if(min < 97 && max > 122) return "[Error] Podana wartość nie jest literą z zakresu a - z";
    else {
        string generatedStringNumber = max > min
                ? lab_05_01(min, max, true)
                : lab_05_01(max, min, true);

        int generatedLetterNumber = stoi(generatedStringNumber);
        char generatedLetter = (char) generatedLetterNumber;

        cout << "Wylosowana litera to: " << generatedLetter << " (" << generatedLetterNumber << ")" << endl << endl;

        return {generatedLetter};
    }
}

string lab_05_03(int length) {
    static const int MIN_CHAR = 33;
    static const int MAX_CHAR = 126;


    if(length < 1 || length > 256) return "[Error] Podana długość ciągu znaków powinna być w zakresie od 1 do 256";
    else {
        string result;

        for(int x = 0; x < length; x++) {
            string valueAsString = lab_05_01(MIN_CHAR, MAX_CHAR, true);
            int valueAsInt = stoi(valueAsString);
            result += (char)valueAsInt;
        }

        return result;
    }
}

// Wywołania zadań
string executeLab_05_01() {
    int min, max;
    cout << "Podaj min: ";
    cin >> min;
    cout << "Podaj max: ";
    cin >> max;

    return lab_05_01(min, max);
}

string executeLab_05_02() {
    char start, stop;
    cout << "Podaj znak początkowy: ";
    cin >> start;
    cout << "Podaj znak końcowy: ";
    cin >> stop;

    return lab_05_02(start, stop);
}

string executeLab_05_03() {
    int length;
    cout << "Podaj długość: ";
    cin >> length;

    return lab_05_03(length);
}

// Funkcje sterujace przebiegiem programu
int getOption(const string descriptions[], const int descriptionsCount) {
    int result;

    cout << "Program pozwala na wykonanie różnych funkcji." << endl << endl
         << "Możliwe opcje to:" << endl
         << "[0] Zakończenie programu" << endl;

    for(int x = 0; x < descriptionsCount; x++) {
        cout << "[" << x + 1 << "] " << descriptions[x] << endl;
    }

    cout << endl << "Proszę wybrać opcję: ";
    cin >> result;

    return result;
}

string executeExercise(int option) {
    switch (option) {
        case 1: return executeLab_05_01();
        case 2: return executeLab_05_02();
        case 3: return executeLab_05_03();
        default: return "Wybrana funkcja nie została poprawnie przypisana";
    }
}

void logExercise(int option, const string& description, int firstListLastIndex) {
    static const string line = "-----------------------------------";
    const int listNumber = option > firstListLastIndex ? 6 : 5;
    const int calculatedOption = option > firstListLastIndex ? option - firstListLastIndex : option;

    cout << line << endl;
    logInfo("#Lab_0" + to_string(listNumber) + "_" + (calculatedOption < 10 ? "0" : "") + to_string(calculatedOption));
    logInfo(description);
    cout << endl;

    string result = executeExercise(option);

    logResult("Wynik: " + result);
    cout << line << endl << endl;
}

// Główna funkcja programu
int main() {
    static const string descriptions[] = {
            "Generator liczb losowych",
            "Generator losowych liter a - z",
            "Generator losowych ciągów znaków",
            "Rysowanie figur z gwiazdek"
    };

    static const int descriptionsCount = sizeof(descriptions)/sizeof(descriptions[0]);

    while(true) {
        const int option = getOption(descriptions, descriptionsCount);

        if(option == 0) {
            cout << "Podano 0 - program kończy działanie";
            return 0;
        } else {
            logExercise(option, descriptions[option - 1], 3);
        }
    }
}
