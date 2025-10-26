#include <iostream>
using namespace std;

bool tieneDigito(string code) {
    for (int i = 0; i < code.size(); i++) {
        if (code[i] >= '0' && code[i] <= '9') {
            return true;
        }
    }
    return false;
}

bool tieneSimboloEspecial(string code) {
    for (int i = 0; i < code.size(); i++) {
        char c = code[i];
        if (c == '@' || c == '#' || c == '$' || c == '%') {
            return true;
        }
    }
    return false;
}

bool sinEspacios(string code) {
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == ' ') {
            return false;
        }
    }
    return true;
}

void validateCode() {
    string code;
    cout << "Ingrese el codigo de acceso: ";
    cin >> code;

    bool digito = tieneDigito(code);
    bool simbolo = tieneSimboloEspecial(code);
    bool sinEsp = sinEspacios(code);

    if (digito && simbolo && sinEsp) {
        cout << "Codigo de acceso valido" << endl;
    } else {
        cout << "Codigo de acceso invalido" << endl;
    }
}

int main() {
    validateCode();
    return 0;
}