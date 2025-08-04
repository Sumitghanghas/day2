#include "stringhandling.h"
#include <iostream>
using namespace std;

int main()
{
    const char *text = "Hello WorLD!";
    const char *substring = "world";

    int index = strcasestre(text, substring);
    if (index != -1)
    {
        cout << "At index: " << index << endl;
    }
    else
    {
        cout << "Not match" << endl;
    }

    return 0;
}
