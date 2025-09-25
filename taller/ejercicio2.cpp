#include <iostream>
using namespace std;

void clasificarNumero(int Number) {
    if (Number > 0) {
        cout << "Positivo" << endl;
    } else if (Number < 0) {
        cout << "Negativo" << endl;
    } else {
        cout << "Cero" << endl;
    }
}
    if (Number >=10) {
        cout << "El numero esta entre -10 y 10." << endl;
    } else {
        cout << "El numero no esta dentro de -10 y 10." << endl;
    }
}


int main() {
    int Number;

    cout << "Ingrese un numero entero: ";
    cin >> Number;

    clasificarNumero(Number);

    return 0;
}
