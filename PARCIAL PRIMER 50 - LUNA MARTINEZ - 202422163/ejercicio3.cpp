#include <iostream>
using namespace std;

bool requiereMantenimiento(int hojas, int intervalo) {
    if (hojas % intervalo == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int hojas, intervalo;

    cout << "Ingrese la cantidad de hojas producidas: ";
    cin >> hojas;

    cout << "Ingrese cada cuantas hojas la maquina necesita mantenimiento: ";
    cin >> intervalo;

    if (requiereMantenimiento(hojas, intervalo)) {
        cout << "La maquina necesita mantenimiento." << endl;
    } else {
        cout << "La maquina no necesita mantenimiento." << endl;
    }

    return 0;
}