#include "stringhandling.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.csv");
    if (!file) {
        cout << "Failed to open file." << endl;
        return 1;
    }

    
    char data[10000]; 
    data[0] = '\0';

    char line[500];
    while (file.getline(line, 500)) {
        strconcat(data, line);
        strconcat(data, "\n");
    }

    file.close();

    char** result = tokenize(data);

    for (int i = 0; result[i] != nullptr; i++) {
        cout << "[" << result[i] << "]" << endl;
        delete[] result[i];
    }
    delete[] result;

    return 0;
}
