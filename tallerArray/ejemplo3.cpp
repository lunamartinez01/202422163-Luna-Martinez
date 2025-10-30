#include <iostream>

using namespace std;

void forWithArray (){
    int higherNumber = 0;
    int numbers[6] = {8, 12, 5, 20, 7, 15};
    
    for (int i = 0; i < 6; i++){

        int arrayValue = numbers [i];
        cout << "El valor es: " << arrayValue << endl;


        if (numbers [i] > higherNumber){
            higherNumber = numbers[i];
        }

    }
    cout << "El numero mayor es: " << higherNumber << endl; 
    
}
int main (){
    forWithArray ();
    return 0;
}