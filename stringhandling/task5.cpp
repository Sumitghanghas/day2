#include "stringhandling.h"
#include <iostream>
using namespace std;

int main() {
    char data[] = "  hello this  is a code \t of the remove extra white    space and   just add   only one   ";
    whitespace(data);
    cout << data << endl;
    return 0;
}

