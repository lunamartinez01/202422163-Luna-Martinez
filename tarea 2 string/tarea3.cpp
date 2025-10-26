#include <iostream>
using namespace std;

int contarGuiones(string code) {
    int contador = 0;
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == '-') {
            contador++;
        }
    }
    return contador;
}

int contarDigitos(string code) {
    int contador = 0;
    for (int i = 0; i < code.size(); i++) {
        if (code[i] >= '0' && code[i] <= '9') {
            contador++;
        }
    }
    return contador;
}

bool validarUltimaMayuscula(string code) {
    char last = code[code.size() - 1];
    if (last >= 'A' && last <= 'Z') {
        return true;
    } else {
        return false;
    }
}

void analyzeCode() {
    string code;
    cout << "Ingrese el codigo del producto: ";
    cin >> code;

    cout << "Guiones: " << contarGuiones(code) << endl;
    cout << "Digitos: " << contarDigitos(code) << endl;

    if (validarUltimaMayuscula(code)) {
        cout << "Termina con una mayuscula" << endl;
    } else {
        cout << "No termina con una mayuscula" << endl;
    }
}

int main() {
    analyzeCode();
    return 0;
}