#include <iostream>
using namespace std;

void showText(string text) 
{
    int total = text.length();
    int countWithoutSpaces = 0;
    for (int i = 0; i < total; i++) 
    {
        char textChar = text[i];
        if (textChar != ' ')
        {
            countWithoutSpaces++;
        }
    }
    cout << text << endl;
    cout << "Cantidad total de caracteres: " << total << endl;
    cout << "Caracteres sin espacios: " << countWithoutSpaces << endl;
}

int main ()
{
    string text = "Programacion en c++";
    showText(text);
    return 0;
}