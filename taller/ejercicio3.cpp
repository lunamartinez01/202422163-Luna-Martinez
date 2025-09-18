#include <iostream>
using namespace std;

void mostrarTabla(int number) {
    for (int i = 1; i <= 10; i++) {
        cout << number << " * " << i << " = " << number * i << endl;
    }
}

int main() {
    int number;

    cout << "Ingrese un numero: ";
    cin >> number;

    mostrarTabla(number);

    return 0;
}
