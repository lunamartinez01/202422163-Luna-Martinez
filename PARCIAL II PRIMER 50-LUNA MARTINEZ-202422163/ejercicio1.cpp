#include <iostream>
using namespace std;
int calculateTotal (int hours, int rate) {
    return hours * rate;
}

void printInvoice (string plate, int hours, int rate) {
    int total = calculateTotal (hours, rate);
    cout << "Vehiculo:" << plate << " horas: " << hours << " tarifa: "<< rate << " total: " << total << endl;    
}

int main () {
    string plate;
    int hours, rate;

    cout << "Ingrese la placa:";
    cin >> plate;
    cout << "Ingrese las horas:";
    cin >> hours;
    cout << "Ingrese la tarifa:";
    cin >> rate;

    printInvoice (plate, hours, rate);

    return 0;
}

