#include <iostream>
using namespace std;

void sumOfTwoValues (int valueOne, int valueTwo) {
    int sumResult;
    sumResult = valueOne + valueTwo;
    cout << "La suma de los valores es: " << sumResult << endl;
}

void substractOfTwoValues (int valueOne, int valueTwo) {
    int sumResult;
    sumResult = valueOne - valueTwo;
    cout << "La resta de los valores es: " << sumResult << endl;
} // ← cierre que te faltaba

void multiplicationOfTwoValues (int valueOne, int valueTwo) {
    int sumResult;
    sumResult = valueOne * valueTwo;
    cout << "La multiplicacion de los valores es: " << sumResult << endl;
}

int main () {
    int valueOne, valueTwo;

    cout << "Ingrese un numero: ";
    cin >> valueOne; 

    cout << "Ingrese otro numero: ";
    cin >> valueTwo;

    sumOfTwoValues(valueOne, valueTwo);
    substractOfTwoValues(valueOne, valueTwo);
    multiplicationOfTwoValues(valueOne, valueTwo);

    return 0;  
}
