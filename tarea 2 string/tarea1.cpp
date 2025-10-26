#include <iostream>
using namespace std;

bool validarLongitud(string userName) {
    return userName.length() >= 6 && userName.length() <= 12;
}

bool validarInicioLetra(string userName) {
    char first = userName[0];
    if ((first >= 'A' && first <= 'Z') || (first >= 'a' && first <= 'z')) {
        return true;
    } else {
        return false;
    }
}

bool validarSinEspacios(string userName) {
    for (int i = 0; i < userName.size(); i++) {
        if (userName[i] == ' ') {
            return false;
        }
    }
    return true;
}

void verificarUsuario() {
    string user;
    cout << "Ingrese su nombre de usuario: ";
    cin >> user;

    bool longitud = validarLongitud(user);
    bool inicioLetra = validarInicioLetra(user);
    bool sinEspacios = validarSinEspacios(user);

    if (longitud && inicioLetra && sinEspacios) {
        cout << "Nombre de usuario valido" << endl;
    } else {
        cout << "Nombre de usuario invalido" << endl;
    }
}

int main() {
    verificarUsuario();
    return 0;
}