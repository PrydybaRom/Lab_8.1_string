
#include <iostream>
#include <string>


using namespace std;

// Рахує кількість +
int countSymbolsPlus(const string str) {
    int pCount = 0;
    size_t pos = 0;
    while ((pos = str.find('+', pos)) != -1) {
        pCount++;
        pos++;
    }
    return pCount;
}

// Рахує кількість -
int countSymbolsMinus(const string str) {
    int mCount = 0;
    size_t pos = 0;
    while ((pos = str.find('-', pos)) != -1) {
        mCount++;
        pos++;
    }
    return mCount;
}

// Рахує кількість =
int countSymbolsEquals(const string str) {
    int eCount = 0;
    size_t pos = 0;
    while ((pos = str.find('=', pos)) != -1) {
        eCount++;
        pos++;
    }
    return eCount;
}

// Змінює символи + - = на **
string changeSymbols(string& str) {
    size_t pos = 0;

    while ((pos = str.find_first_of("+-=", pos)) != string::npos) {
        str.replace(pos, 1, "**");
        pos += 2;
    }

    return str;
}

int main() {
    string str;

    cout << "Enter string:" << endl;
    getline(cin, str);

    int pCount = countSymbolsPlus(str);
    int mCount = countSymbolsMinus(str);
    int eCount = countSymbolsEquals(str);

    cout << "Str contained + : " << pCount << endl;
    cout << "Str contained - : " << mCount << endl;
    cout << "Str contained = : " << eCount << endl;

    string modifiedArray = changeSymbols(str);
    cout << "Modified Array : " << modifiedArray << endl;


    return 0;
}
