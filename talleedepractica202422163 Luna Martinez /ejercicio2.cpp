#include <iostream>
using namespace std;

void mm (){
    string word = "Hello";
    string newWord = "";
    for (int i = 0; i < word.size(); i++)
    {
        char character = word[i];
        if (i % 2 == 0)
        {
            if (character >= 'A' && character <= 'Z')
            {
                newWord += character;
            } 
            else if(character >= 'a' && character <= 'z')
            {
                newWord += character - 32;
            }
        }
        else
        {
            if (character >= 'A' && character <= 'Z')
            {
                newWord += character + 32;
            } 
            else if(character >= 'a' && character <= 'z')
            {
                newWord += character;
            }
        }
    }
    cout << word << endl;
    cout << newWord << endl;
    
}

int main (){
    mm();
    return 0;
}