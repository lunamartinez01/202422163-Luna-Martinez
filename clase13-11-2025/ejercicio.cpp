#include<iostream>

using namespace std;

class mmm {
    public:
        bool continueRunning = true;
        int arraySize = 0;
        string* saleNames;
        int* saleValues;

    void run() {
        while (continueRunning) {
            int userAction = getUserAction();

            if (userAction == 1){
                int newArraySize;
                cout << "Ingrese el número de ventas a registrar: ";
                cin >> newArraySize;
                arraySize = newArraySize;

                delete[] saleNames;
                delete[] saleValues;

                saleNames = getSalesNames();
                saleValues = getSalesValues();

            } 
            else if (userAction == 2){
                printSales();

            } 
            else if (userAction == 3){
                modifySale();

            } 
            else if (userAction == 4){
                findSale();

            } 
            else if (userAction == 5){
                showSalesInRange();

            } 
            else if (userAction == 6){
                calculateTotal();

            } 
            else if (userAction == 7){
                delete[] saleNames;
                delete[] saleValues;
                continueRunning = false;
            }
        }
    }

    int getUserAction(){
        int userAction;
        cout << "-----------------------------" << endl;
        cout << "Por favor seleccione:" << endl;
        cout << "1 Registrar o reiniciar ventas." << endl;
        cout << "2 Mostrar todas las ventas." << endl;
        cout << "3 Modificar una venta." << endl;
        cout << "4 Buscar una venta." << endl;
        cout << "5 Mostrar ventas dentro de un rango de precios." << endl;
        cout << "6 Calcular total de ventas." << endl;
        cout << "7 Salir." << endl;
        cout << "Ingrese una opción: ";
        cin >> userAction;
        cout << "-----------------------------" << endl;
        return userAction;
    }

    string* getSalesNames(){
        string* newNames = new string[arraySize];
        for (int i = 0; i < arraySize; i++){
            cout << "Ingrese el nombre de la venta " << i + 1 << ": ";
            cin >> newNames[i];
        }
        return newNames;
    }

    int* getSalesValues(){
        int* newValues = new int[arraySize];
        for (int i = 0; i < arraySize; i++){
            cout << "Ingrese el valor de " << saleNames[i] << ": ";
            cin >> newValues[i];
        }
        return newValues;
    }

    void printSales(){
        cout << "Lista actual de ventas:" << endl;
        cout << "-----------------------------" << endl;
        for (int i = 0; i < arraySize; i++){
            cout << "Venta: " << saleNames[i] << "  Valor: " << saleValues[i] << endl;
        }
    }

    void modifySale(){
        string nameToModify;
        cout << "Ingrese el nombre de la venta a modificar: ";
        cin >> nameToModify;

        int found = 0;
        for (int i = 0; i < arraySize; i++){
            if (saleNames[i] == nameToModify){
                cout << "Ingrese el nuevo valor para " << nameToModify << ": ";
                cin >> saleValues[i];
                found = 1;
            }
        }

        if (found == 0){
            cout << "Venta no encontrada." << endl;
        }
    }

    void findSale(){
        string nameToFind;
        cout << "Ingrese el nombre de la venta a buscar: ";
        cin >> nameToFind;

        int found = 0;
        for (int i = 0; i < arraySize; i++){
            if (saleNames[i] == nameToFind){
                cout << "Venta encontrada en la posición " << i + 1 << " con valor: " << saleValues[i] << endl;
                found = 1;
            }
        }

        if (found == 0){
            cout << "Venta no encontrada." << endl;
        }
    }

    void showSalesInRange(){
        int minValue, maxValue;
        cout << "Ingrese el valor mínimo: ";
        cin >> minValue;
        cout << "Ingrese el valor máximo: ";
        cin >> maxValue;

        int found = 0;
        cout << "-----------------------------" << endl;
        cout << "Ventas dentro del rango (" << minValue << " - " << maxValue << "):" << endl;
        for (int i = 0; i < arraySize; i++){
            if (saleValues[i] >= minValue && saleValues[i] <= maxValue){
                cout << "Venta: " << saleNames[i] << "  Valor: " << saleValues[i] << endl;
                found = 1;
            }
        }

        if (found == 0){
            cout << "No hay ventas dentro de este rango." << endl;
        }
    }

    void calculateTotal(){
        int total = 0;
        for (int i = 0; i < arraySize; i++){
            total = total + saleValues[i];
        }
        cout << "El total de las ventas registradas es: " << total << endl;
    }
};

int main(){
    mmm mm;
    mm.run();
    return 0;
}
