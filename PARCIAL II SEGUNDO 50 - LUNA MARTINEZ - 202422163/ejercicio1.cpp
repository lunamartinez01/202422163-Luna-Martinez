#include<iostream>

using namespace std;

int getUserAction(){
    int userAction;
    cout << "--------------------" << endl;
    cout << "Por favor seleccione: " << endl;
    cout << "1 Iniciar o registrar paquetes." << endl;
    cout << "2 Mostrar paquetes." << endl;
    cout << "3 Modificar paquete." << endl;
    cout << "4 Ver paquetes entregados o pendientes." << endl;
    cout << "5 Salir." << endl;
    cout << "Ingrese una opción: ";
    cin >> userAction;
    cout << "--------------------" << endl;
    return userAction;
}

void printPackages(string names[], int weights[], int size){
    cout << "Lista actual de paquetes:" << endl;
    cout << "--------------------" << endl;
    for (int i = 0; i < size; i++){
        cout << "Paquete: " << names[i] << "  Peso: " << weights[i] << endl;
    }
}

void modifyPackages(string names[], int weights[], bool delivered[], int size){
    string name;
    cout << "Ingrese el nombre del paquete a modificar: ";
    cin >> name;
    int found = 0;

    for (int i = 0; i < size; i++){
        if (names[i] == name){
            cout << "Ingrese el nuevo valor para " << name << ": ";
            cin >> weights[i];
            found = 1;
        }
    }

    if (found == 0){
        cout << "Paquete no encontrado." << endl;
    }
}

void filterByDeliveryStatus(string names[], int weights[], bool delivered[], int size){
    int selection;
    cout << "1 para entregados, 2 para pendientes";
    cin >> selection;
    for (int i = 0; i < size; i++){
        bool isDelivered = delivered[i];
        if (selection == 1)
        {
            if (isDelivered)
            {
                cout << names[i] << endl;
            }
        } else {
            if (!isDelivered)
            {
                cout << "El paquete: " << names[i] << endl;
            }
        }
    }
    cout << "--------------------" << endl;
}

string* registerPackages(int size){
    string* names = new string[size];
    for (int i = 0; i < size; i++){
        cout << "Ingrese el nombre del paquete" << i + 1 << ": ";
        cin >> names[i];
    }
    return names;
}

int* registerWeigths(int size, string names[]){
    int* weights = new int[size];
    for (int i = 0; i < size; i++){
        cout << "Ingrese el peso en kg " << names[i] << ": ";
        cin >> weights[i];
    }
    return weights;
}
bool* registerDelivered (int size, string names[], bool delivered){
    bool* newDelivery = new bool [size];
    for (int i = 0; i < size; i++){
        cout << "Ingrese 1 para entregado 2 para pendiente " << ": ";
        int deliveredState;
        cin >> deliveredState;
        if (deliveredState == 1){
            newDelivery[i] = true;
        }
        else if(deliveredState == 2){
            newDelivery[i] = false;
        }
    }
    return newDelivery;
}

void run(){
    bool continueRunning = true;
    int size = 0;
    string* names = registerPackages(size);
    int* weights = registerWeigths(size, names);
    bool* delivered = new bool[size];

    while (continueRunning){
        int userAction = getUserAction();

        if (userAction == 1){
            int newSize;
            cout << "Ingrese numero de paquetes a registrar: ";
            cin >> newSize;
            delete[] names;
            delete[] weights;
            names = registerPackages(newSize);
            weights = registerWeigths(newSize, names);
            size = newSize;
        } 
        else if (userAction == 2){
            printPackages(names, weights, size);
        } 
        else if (userAction == 3){
            modifyPackages(names, weights, delivered, size);
        } 
        else if (userAction == 4){
            filterByDeliveryStatus(names, weights, delivered, size);
        } 
        else if (userAction == 5){
            delete[] names;
            delete[] weights;
            continueRunning = false;
        }
    }
}

int main(){
    run();
    return 0;
}








    


    

