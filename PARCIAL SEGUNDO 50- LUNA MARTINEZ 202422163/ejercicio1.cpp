#include <iostream>
using namespace std;

void mm (){
    string phrase;
    cout << "Ingrese una frase: " << endl;
    cin >> phrase;

    int totalWord = 0;
    int currentWord = " ";
    int longestWord = 0;
    for (int i = 0; i < phrase.size(); i++){
        char textChar = phrase[i];
        if (textChar != ' '){
            currentWord++;
        }
    }
    
}
int main (){
    string phrase = "Programar en C++ es muy divertido";
    mm (phrase);
    return 0;
}