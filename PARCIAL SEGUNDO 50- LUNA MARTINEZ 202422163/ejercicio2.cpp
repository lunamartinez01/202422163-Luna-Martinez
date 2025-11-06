#include <iostream>
using namespace std;

void mm (){
    string ciudades[10] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira", "Bucaramanga", "Manizales", "Tunja", "Santa Marta", "Villavicencio"};
    float temperaturas[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};
    float tempMax, tempMin;
    float Sum = 0;
    cout << "Temperatura minima: " << endl;
    cin >> tempMin;
    cout << "Temperatura maxima: " << endl;
    cin >> tempMax;
    
    cout << " Ciudades dentro del rango: " << tempMin << " - " << tempMax << endl;

    for (int i = 0; i < 10; i++){
        string value = ciudades [i];
        float temp = temperaturas[i];
        if (temp > tempMin && temp < tempMax){
            cout << "La ciudad: " << value << endl;
            cout << "La temperaturas es: " << temp << endl;
        }
        Sum = Sum + temp;
    }

    float tempAverage = Sum / 10;
    cout << "El promedio de las temperaturas es: " << tempAverage << endl;
} 
int main (){
    mm ();
    return 0;
}  
