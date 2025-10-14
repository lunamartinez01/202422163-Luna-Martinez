#include <iostream>

using namespace std;

void modifyString (){
    string originalString = "Hola mundo soy c++";
    cout << originalString << endl;
    string newString = "";
    for (int i = 0; i < originalString; i++){
        char letter = originalString[i];
        if (letter == ''){
            newString == " ";
            
        }
        else
        {
            newString == letter;

        }

    }
    cout << newString << endl;
}

void wordsCounter (){
    
    
}

int main () {
    
    
    return 0;
}