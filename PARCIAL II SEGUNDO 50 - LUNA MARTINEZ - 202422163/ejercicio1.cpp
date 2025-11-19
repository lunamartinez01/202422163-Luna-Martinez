#include<iostream>

using namespace std;

bool validateName(string name){
    if (name.size() == 0){
        cout << "El nombre no puede estar vacio." << endl;
        return false;
    }
    if (name[0] < 'A' || name[0] > 'Z'){
        cout << "El nombre debe iniciar con mayuscula." << endl;
        return false;
    }

    bool haveNumber = false;
    for (int i = 0; i < name.size(); i++){
        if (name[i] >= '0' && name[i] <= '9') haveNumber = true;
        if (name[i] == ' '){
            cout << "El nombre no puede contener espacios." << endl;
            return false;
        }
    }

    if (!haveNumber){
        cout << "El nombre debe tener un numero." << endl;
        return false;
    }

    return true;
}

int getUserAction(){
    int userAction;
    cout << "--------------------" << endl;
    cout << "Por favor seleccione: " << endl;
    cout << "1 Iniciar o registrar paquetes." << endl;
    cout << "2 Mostrar paquetes." << endl;
    cout << "3 Modificar paquete." << endl;
    cout << "4 Ver paquetes entregados o pendientes." << endl;
    cout << "5 Filtrar por peso" << endl;
    cout << "6 Salir." << endl;
    cout << "Ingrese una opción: ";
    cin >> userAction;
    cout << "--------------------" << endl;
    return userAction;
}

void printPackages(string names[], int weights[], bool delivered[], int size){
    cout << "Lista actual de paquetes:" << endl;

    for (int i = 0; i < size; i++){
        cout << i+1 << ". " << names[i] 
             << "  Peso: " << weights[i] 
             << " kg  Estado: " 
             << (delivered[i] ? "Entregado" : "Pendiente")
             << endl;
    }
}

void modifyPackages(string names[], int weights[], bool delivered[], int size){
    string name;
    cout << "Ingrese el nombre del paquete a modificar: ";
    cin >> name;
    int found = -1;

    for (int i = 0; i < size; i++){
        if (names[i] == name){
            found = i;
        }
    }

    if (found == -1){
        cout << "Paquete no encontrado." << endl;
        return;
    }

    cout << "Nuevo nombre: ";
    string newName;
    cin >> newName;

    while (!validateName(newName)){
        cout << "Ingrese un nombre valido: ";
        cin >> newName;
    }
    names[found] = newName;

    cout << "Nuevo peso: ";
    cin >> weights[found];

    cout << "Ingrese 1 para entregado, 2 para pendiente: ";
    int state;
    cin >> state;
    delivered[found] = (state == 1);

    cout << "Paquete modificado con exito." << endl;
}

void filterByDeliveryStatus(string names[], int weights[], bool delivered[], int size){
    int selection;
    cout << "1 para entregados, 2 para pendientes: ";
    cin >> selection;

    for (int i = 0; i < size; i++){
        if (selection == 1 && delivered[i]){
            cout << names[i] << "  " << weights[i] << " Entregado" << endl;
        }
        if (selection == 2 && !delivered[i]){
            cout << names[i] << "  " << weights[i] << " Pendiente" << endl;
        }
    }
}
void filterByWeightAndReplace(string* names, int* weights, bool* delivered, int size){
    if(size == 0){
        cout << "No hay paquetes registrados." << endl;
        return;
    }

    int limit;
    cout << "Ingrese el limite de peso: ";
    cin >> limit;

    int count = 0;

    for(int i = 0; i < size; i++){
        if(weights[i] > limit) count++;
    }

    if(count == 0){
        cout << "Ningun paquete supera ese limite." << endl;
        return;
    }

    string* newNames = new string[count];
    int* newWeights = new int[count];
    bool* newDelivered = new bool[count];

    int in = 0;
    for(int i = 0; i < size; i++){
        if(weights[i] > limit){
            newNames[in] = names[i];
            newWeights[in] = weights[i];
            newDelivered[in] = delivered[i];
            in++;
        }
    }

    cout << "Lista filtrada" << endl;
    for(int i = 0; i < count; i++){

        string estadoNuevo;
        if(newDelivered[i]){
            estadoNuevo = "Entregado";
        } 
        else{
            estadoNuevo = "Pendiente";
        }

        cout << i+1 << "  " << newNames[i] << "  " << newWeights[i] << "  " << estadoNuevo << endl;
    }

    cout << "¿Desea reemplazar la lista actual?" << endl;
    cout << "1. S" << endl;
    cout << "2. No" << endl;

    int op;
    cin >> op;

    if(op == 1){
        delete[] names;
        delete[] weights;
        delete[] delivered;

        names = newNames;
        weights = newWeights;
        delivered = newDelivered;
        size = count;

        cout << "Lista reemplazada correctamente." << endl;
    } 
    else {
        delete[] newNames;
        delete[] newWeights;
        delete[] newDelivered;

        cout << "Lista filtrada descartada." << endl;
    }
}
string* registerPackages(int size){
    string* names = new string[size];
    for (int i = 0; i < size; i++){
        cout << "Ingrese el nombre del paquete " << i + 1 << ": ";
        cin >> names[i];

        while(!validateName(names[i])){
            cout << "Ingrese un nombre valido: ";
            cin >> names[i];
        }
    }
    return names;
}

int* registerWeights(int size, string names[]){
    int* weights = new int[size];
    for (int i = 0; i < size; i++){
        cout << "Ingrese el peso en kg de " << names[i] << ": ";
        cin >> weights[i];
    }
    return weights;
}

bool* registerDelivered(int size){
    bool* newDelivery = new bool[size];
    for (int i = 0; i < size; i++){
        cout << "Ingrese 1 para entregado, 2 para pendiente: ";
        int deliveredState;
        cin >> deliveredState;

        newDelivery[i] = (deliveredState == 1);
    }
    return newDelivery;
}

void run(){
    bool continueRunning = true;
    int size = 0;

    string* names = new string[0];
    int* weights = new int[0];
    bool* delivered = new bool[0];

    while (continueRunning){
        int userAction = getUserAction();

        if (userAction == 1){
            int newSize;
            cout << "Ingrese numero de paquetes a registrar: ";
            cin >> newSize;

            delete[] names;
            delete[] weights;
            delete[] delivered;

            names = registerPackages(newSize);
            weights = registerWeights(newSize, names);
            delivered = registerDelivered(newSize);
            size = newSize;
        } 
        else if (userAction == 2){
            printPackages(names, weights, delivered, size);
        } 
        else if (userAction == 3){
            modifyPackages(names, weights, delivered, size);
        } 
        else if (userAction == 4){
            filterByDeliveryStatus(names, weights, delivered, size);
        } 
        else if (userAction == 5){
            filterByWeightAndReplace(names, weights, delivered, size);
        }
        else if (userAction == 6){
            continueRunning = false;
        }
    }

    delete[] names;
    delete[] weights;
    delete[] delivered;
}

int main(){
    run();
    return 0;
}

