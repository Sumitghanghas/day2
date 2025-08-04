#include <iostream>
#include <fstream>
#include "stringhandling.h"

using namespace std;

int main()
{
    char filename[] = "data,txt";
    char searchWord[100];

    cout << "Enter the word: ";
    cin >> searchWord;

    ifstream file(filename);
    if (!file.is_open())
    {
        cout << "Failed to open the file";
        return 1;
    }

    char line[1000];
    int occurrence = 0;
    int lineNumber = 1;

    while (file.getline(line, 1000))
    {
        whitespace(line);
        char **tokens = tokenize(line);
        if (!tokens)
        {
            continue;
        }

        int i = 0;
        while (tokens[i] != nullptr)
        {
            if (strcasestre(tokens[i], searchWord) != -1 && strlength(tokens[i]) == strlength(searchWord))
            {
                occurrence++;
            }
            delete[] tokens[i];
            i++;
        }

        delete[] tokens;
        lineNumber++;
    }

    file.close();

    cout << "occurrence of the given word is: " << occurrence << endl;

    return 0;
}
