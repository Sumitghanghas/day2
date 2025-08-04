#include <iostream>
#include <fstream>
#include "stringhandling.h"  

using namespace std;

int main() {
    char filename[100];
    char buffer[10000];
    int i = 0;

    cin >> filename;


    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Failed to open the file";
        return 1;
    }

    char ch;
    while (file.get(ch) && i < 9999) {
        buffer[i++] = ch;
    }
    buffer[i] = '\0';
    file.close();

    int words = count_words(buffer);
    cout << "number of words " << words << endl;

    return 0;
}
