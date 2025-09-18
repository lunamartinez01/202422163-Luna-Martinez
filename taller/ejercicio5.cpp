#include <iostream>
using namespace std;

int mayor(int firstNumber, int secondNumber) {
    if (firstNumber > secondNumber) {
        return firstNumber;
    } else {
        return secondNumber;
    }
}

int main() {
    int firstNumber, secondNumber;

    cout << "Ingrese el primer numero: ";
    cin >> firstNumber;

    cout << "Ingrese el segundo numero: ";
    cin >> secondNumber;

    cout << "El mayor es: " << mayor(firstNumber, secondNumber) << endl;

    return 0;
}