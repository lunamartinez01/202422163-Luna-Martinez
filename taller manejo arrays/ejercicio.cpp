#include<iostream>

using namespace std;

int getUserAction(){
    int userAction;
    cout << "--------------------" << endl;
    cout << "Por favor seleccione: " << endl;
    cout << "1 Registrar o reiniciar ventas." << endl;
    cout << "2 Mostrar todas las ventas." << endl;
    cout << "3 Modificar una venta." << endl;
    cout << "4 Buscar una venta." << endl;
    cout << "5 Mostrar ventas dentro de un rango de precios." << endl;
    cout << "6 Calcular total de ventas." << endl;
    cout << "7 Salir." << endl;
    cout << "Ingrese una opción: ";
    cin >> userAction;
    cout << "--------------------" << endl;
    return userAction;
}

void printSales(string names[], int values[], int size){
    cout << "Lista actual de ventas:" << endl;
    cout << "--------------------" << endl;
    for (int i = 0; i < size; i++){
        cout << "Venta: " << names[i] << "  Valor: " << values[i] << endl;
    }
}

void modifySale(string names[], int values[], int size){
    string name;
    cout << "Ingrese el nombre de la venta a modificar: ";
    cin >> name;
    int found = 0;

    for (int i = 0; i < size; i++){
        if (names[i] == name){
            cout << "Ingrese el nuevo valor para " << name << ": ";
            cin >> values[i];
            found = 1;
        }
    }

    if (found == 0){
        cout << "Venta no encontrada." << endl;
    }
}

void findSale(string names[], int values[], int size){
    string name;
    cout << "Ingrese el nombre de la venta que desea buscar: ";
    cin >> name;
    int found = 0;

    for (int i = 0; i < size; i++){
        if (names[i] == name){
            cout << "Venta encontrada en la posición " << i + 1 << "  Valor: " << values[i] << endl;
            found = 1;
        }
    }

    if (found == 0){
        cout << "Venta no encontrada." << endl;
    }
}

void salesInRange(string names[], int values[], int size){
    int minValue, maxValue;
    cout << "Ingrese el valor mínimo: ";
    cin >> minValue;
    cout << "Ingrese el valor máximo: ";
    cin >> maxValue;
    int found = 0;

    cout << "Ventas dentro del rango (" << minValue << ", " << maxValue << "):" << endl;
    cout << "--------------------" << endl;

    for (int i = 0; i < size; i++){
        if (values[i] >= minValue && values[i] <= maxValue) {
            cout << "Venta: " << names[i] << "  Valor: " << values[i] << endl;
            found = 1;
        }
    }

    if (found == 0){
        cout << "No hay ventas dentro de este rango." << endl;
    }
}

void calculateTotal(int values[], int size){
    int total = 0;
    for (int i = 0; i < size; i++){
        total = total + values[i];
    }
    cout << "El total de las ventas registradas es: " << total << endl;
}

string* getNewSalesNames(int size){
    string* names = new string[size];
    for (int i = 0; i < size; i++){
        cout << "Ingrese el nombre de la venta" << i + 1 << ": ";
        cin >> names[i];
    }
    return names;
}

int* getNewSalesValues(int size, string names[]){
    int* values = new int[size];
    for (int i = 0; i < size; i++){
        cout << "Ingrese el valor de " << names[i] << ": ";
        cin >> values[i];
    }
    return values;
}

void run(){
    bool continueRunning = true;
    int size = 0;
    string* names = getNewSalesNames(size);
    int* values = getNewSalesValues(size, names);

    while (continueRunning){
        int userAction = getUserAction();

        if (userAction == 1){
            int newSize;
            cout << "Ingrese el número de ventas a registrar: ";
            cin >> newSize;
            delete[] names;
            delete[] values;
            names = getNewSalesNames(newSize);
            values = getNewSalesValues(newSize, names);
            size = newSize;
        } 
        else if (userAction == 2){
            printSales(names, values, size);
        } 
        else if (userAction == 3){
            modifySale(names, values, size);
        } 
        else if (userAction == 4){
            findSale(names, values, size);
        } 
        else if (userAction == 5){
            salesInRange(names, values, size);
        } 
        else if (userAction == 6){
            calculateTotal(values, size);
        } 
        else if (userAction == 7){
            delete[] names;
            delete[] values;
            continueRunning = false;
        }
    }
}

int main(){
    run();
    return 0;
}



