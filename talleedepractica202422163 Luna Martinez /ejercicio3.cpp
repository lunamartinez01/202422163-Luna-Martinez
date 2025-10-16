#include <iostream>
using namespace std;
void word (){
    string firstWord, secondWord;
    int contador = 0;

    cout << "Ingrese una palabra: " << endl;
    cin >> firstWord;
    cout << "Ingrese otra palabra: " << endl;
    cin >> secondWord;
    
    for (int i = 0; i < firstWord.size(); i++){
        if (firstWord[i] >= 'A' && firstWord[i] <= 'Z'){
            firstWord[i] = firstWord[i] + 32;
        }
        
    }
    for (int i = 0; i < secondWord.size(); i++){
        if (secondWord[i] >= 'A' && secondWord[i] <= 'Z'){
            secondWord[i] = secondWord[i] + 32;
        }
}

for (int i = 0; i < firstWord.size(); i++) {
        for (int j = 0; j < secondWord.size(); j++) {
            if (firstWord[i] == secondWord[j]) {
                contador++;
                break;
            }
        }
    }

    cout << " Cantidad de letras que aparecen en ambas palabras:" << contador << endl;
}
int main(){

    word();
    return 0;
}