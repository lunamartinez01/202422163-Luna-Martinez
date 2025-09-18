#include <iostream>
using namespace std;

void clasificarNumero(int number) {
    if (number > 0) {
        cout << "Positivo" << endl;
    } else if (number < 0) {
        cout << "Negativo" << endl;
    } else {
        cout << "Cero" << endl;
    }
}

int main() {
    int number;

    cout << "Ingrese un numero entero: ";
    cin >> number;

    clasificarNumero(number);

    return 0;
}
