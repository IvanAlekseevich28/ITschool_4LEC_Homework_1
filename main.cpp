#include <iostream>
#include <ctype.h>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Enter text for correct:" << endl;
    char text[256];
    gets(text);
    unsigned int sizeText = strlen(text);
    vector<char> newText;
    bool SPACE = false;
    for (unsigned int i = 0; i < sizeText; i++)
    {
        if (SPACE and isspace(text[i]))
         {
            continue;
         }else
                 {
            (isspace(text[i])) ? SPACE = true : SPACE = false;
            newText.push_back(text[i]);
                 }
    }
    for (vector<char>::const_iterator i = newText.begin(); i != newText.end(); ++i)
        cout << *i;
    cout << endl;

    return 0;
}
