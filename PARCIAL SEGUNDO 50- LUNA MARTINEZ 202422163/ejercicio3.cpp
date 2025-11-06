#include <iostream>
using namespace std;

void totalfines (){
    string placas[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
    float multas[6] = {250000, 180000, 300000, 450000, 200000, 120000};
    string ciudades[6] = {"Tunja", "Bogota", "Tunja", "Medellin", "Cali", "Tunja"};
    string cities;

    cout << "Ingrese la ciudad: ";
    cin >> cities;

    float totalFines = 0;
    for (int i = 0; i < 6; i++){
        if (ciudades[i] == cities){
            cout << "Placa: " << placas[i] << " Multa: " << multas[i] << endl;
            totalFines += multas[i];
        }
    }
    cout << "El total de multas en: " << cities << " es: " << totalFines << endl;

}

int main(){
    totalfines();
    return 0;
}

