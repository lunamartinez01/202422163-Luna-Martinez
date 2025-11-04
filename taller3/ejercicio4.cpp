#include <iostream>

using namespace std;

void forWithArray (){
    float numbers[6] = {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};
    float higherNumber = numbers[0];
    float lowerNumber = numbers[0];
   
    
    for (int i = 0; i < 6; i++){

        float arrayValue = numbers [i];
        cout << "El valor es: " << arrayValue << endl;

        if (arrayValue < lowerNumber){
            lowerNumber = numbers[i];
        }
        else if (arrayValue > higherNumber){
            higherNumber = numbers[i];
        } 

        

    }
    cout << "El precio mas alto es: " << higherNumber << endl; 
    cout << "El precio mas bajo es: " << lowerNumber << endl;
}
int main (){
    forWithArray ();
    return 0;
}