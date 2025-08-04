#include <iostream>
#include <fstream>
#include "stringhandling.h"  
using namespace std;

int main() {
    ofstream logFile("data.txt", ios::app); 
    if (!logFile.is_open()) {
        cout << "Failed to open the file";
        return 1;
    }

    const int n = 1024;
    char input[n];

    cout << "Give the txt you want to input use the enter key for the next line and if you want to stop enter the (exit)\n";
    int i=1;
    while (true) {
        cout << "line "<< i++ <<":";
        cin.getline(input, n);

        if (strcampare(input, "exit")) {
            break;
        }

        int len = strlength(input);
        for (int i = 0; i < len; ++i) {
            logFile.put(input[i]);
        }
        logFile.put('\n');
        logFile.flush();  
    }

    logFile.close();
    cout << "Your given input is saved in the file";
    return 0;
}
