#include <iostream>
using namespace std;

void consonant(){
    string word;
    string newWord ="";

    cout << "Ingrese una palabra: " << endl;
    cin >> word;

    for (int i = 0; i < word.size(); i++){
        char c=word[i];

        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
        {
            newWord += c;
        } 
    }
    cout << word << endl;
    cout << newWord << endl;
}
int main (){
    consonant();

    return 0;
}