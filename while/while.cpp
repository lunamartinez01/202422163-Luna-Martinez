#include <iostream>
using namespace std;

int main() {
    int secretNumber = 3; 
    int Try = 0;

    cout << "Adivina el numero:" << endl;

    while (Try != secretNumber) {
        cout << "Ingresa tu numero: ";
        cin >> Try;

        if (Try > secretNumber) {
            cout << "El numero es menor." << endl;
        } 
        else if (Try < secretNumber) {
            cout << "El numero es mayor." << endl;
        } 
        else {
            cout << "¡Felicidades! Adivinaste el numero." << endl;
        }
    }

    return 0;
}

    

    

    
     
