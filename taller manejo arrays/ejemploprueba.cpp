#include<iostream>

using namespace std;

void printArray(string texts[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << "Posicion " << i + 1 << " - Valor: " << texts[i] << endl;
    }
}

void modifyArray(string titles[], int size) {
    int positionToModify;
    printArray(titles, size);
    cout << "Ingrese la posicion a modificar: ";
    cin >> positionToModify;
    positionToModify = positionToModify - 1;
    //positionToModify--;
    string newValue;
    cout << "Ingrese el nuevo valor: ";
    cin >> newValue;
    titles[positionToModify] = newValue;
    printArray(titles, size);
}

int getUserAction() {
    int userAction;
    cout << "---------------------" << endl;
    cout << "Ingrese una opcion: " << endl;
    cout << "1 para modificar la lista: " << endl;
    cout << "2 para imprimir la lista: " << endl;
    cout << "3 para re-inicializar la lista: " << endl;
    cout << "0 para salir: " << endl;
    cin >> userAction;
    cout << "---------------------" << endl;
    return userAction;
}

string* getNewList(int size) {
    string* titles = new string[size];
    for (int i = 0; i < size; i++)
    {
        string newValue;
        cout << "Ingrese el valor para la posicion " << i + 1 << ": ";
        cin >> newValue;
        titles[i] = newValue;
    }
    return titles;
}

void run() {
    int arraySize = 0;
    string* titles = getNewList(arraySize);
    bool continueRunning = true;
    while (continueRunning)
    {
        int userAction = getUserAction();
        switch (userAction)
        {
        // Modificar
        case 1:
            modifyArray(titles, arraySize);
            break;
        // Imprimir    
        case 2:
            printArray(titles, arraySize);
            break;
        // Re-inicializar    
        case 3:
            cout << "Ingrese el tamaño de la lista: ";
            cin >> arraySize;
            titles = getNewList(arraySize);
            break;
        // Salir    
        case 0:
            delete[] titles;
            continueRunning = false;
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    }
}

int main() {
    run();
    return 0;
}