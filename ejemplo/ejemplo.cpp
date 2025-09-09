#include <iostream>
#include <string>   
using namespace std;

int main() {
    double num1, num2, resultado;
    string operacion;

    
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << "Ingrese la operacion (suma, resta, multiplicacion, division): ";
    cin >> operacion;

    if (operacion == "suma") {
        resultado = num1 + num2;
        cout << "El resultado de la suma es: " << resultado << endl;
    }
    else if (operacion == "resta") {
        resultado = num1 - num2;
        cout << "El resultado de la resta es: " << resultado << endl;
    }
    else if (operacion == "multiplicacion") {
        resultado = num1 * num2;
        cout << "El resultado de la multiplicacion es: " << resultado << endl;
    }
    else if (operacion == "division") {
        if (num2 != 0) {
            resultado = num1 / num2;
            cout << "El resultado de la division es: " << resultado << endl;
        } else {
            cout << "Error: No se puede dividir entre 0." << endl;
        }
    }
    else {
        cout << "Operacion no valida. Intente con suma, resta, multiplicacion o division22." << endl;
    }

    return 0;
}