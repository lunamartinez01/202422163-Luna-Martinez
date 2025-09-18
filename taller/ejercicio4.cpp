#include <iostream>
using namespace std;

void contarDescendente(int number) {
    while (number >= 0) {
        cout << number << " ";
        number--;
    }
    cout << endl;
}

void contarAscendente(int number) {
    int i = 0;
    while (i <= number) {
        cout << i << " ";
        i++;
    }
    cout << endl;
}

int main() {
    int number;

    cout << "Ingrese un numero: ";
    cin >> number;

    cout << "Conteo descendente:" << endl;
    contarDescendente(number);

    cout << "Conteo ascendente:" << endl;
    contarAscendente(number);

    return 0;
}
