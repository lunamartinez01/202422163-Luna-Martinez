#include <iostream>

using namespace std;

void forWithArray (){
    int evenCounter = 0;
    int values [8] = {2, 5, 7, 8, 10, 13, 16, 19};
    
    for (int i = 0; i < 8; i++){

        int arrayValue = values [i];
        cout << "El numero es: " << arrayValue << endl;


        if (arrayValue % 2 == 0){
            evenCounter++;
        }

    }
    cout << "Los numeros pares son: " << evenCounter << endl; 
    
}
int main (){
    forWithArray ();
    return 0;
}