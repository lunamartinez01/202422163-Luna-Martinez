#include<iostream>

using namespace std;

class IntOfArrayManager {
    public:
        bool continueRunning = true;
        int arraySize = 0;
        int* numbers;

    void run() {
        while (continueRunning)
        {
            int userAction = getUserAction();
            // Reestablecer
            if(userAction == 1) {
                int newArraySize;
                cout << "Ingrese el tamaño que quiere que tenga la lista: ";
                cin >> newArraySize;
                arraySize = newArraySize;
                numbers = getNewList();
            // Imprimir
            } else if (userAction == 2){
                printArray();
            // Modificar
            } else if (userAction == 3) {
                printArray();
                modifyArray();
            // Salir    
            } else if (userAction == 4) {
                delete[] numbers;
                continueRunning = false;
            }
        }
    } 
    
    int* getNewList() {
        int* newList = new int[arraySize];
        for (int i = 0; i < arraySize; i++)
        {
            int userValue;
            cout << "Ingrese el elemento para la posicion " << i + 1 << ": ";
            cin >> userValue;
            newList[i] = userValue;
        }
        return newList;
    }

    void modifyArray() {
        cout << "Ingrese la posicion a modificar: ";
        int positionToModify, newPositionValue;
        cin >> positionToModify;
        cout << "Ingrese el nuevo valor: ";
        cin >> newPositionValue;
        numbers[positionToModify - 1] = newPositionValue;
    }

    void printArray() {
        cout << "Lista actual" << endl;
        cout << "-----------------------------" << endl;
        for (int i = 0; i < arraySize; i++)
        {
            cout << "Posicion " << i + 1 << " -> Valor actual: " << numbers[i] << endl;
        }
    }
    
    int getUserAction() {
        int userAction;
        cout << "-----------------------------" << endl;
        cout << "Por favor seleccione: " << endl;
        cout << "1 Crear o reemplazar lista." << endl;
        cout << "2 para imprimir la lista." << endl;
        cout << "3 para modificar la lista." << endl;
        cout << "4 para salir." << endl;
        cout << "Ingrese un valor: ";
        cin >> userAction;
        cout << "-----------------------------" << endl;
        return userAction;
    }
};

int main() {
    IntOfArrayManager arrayManager;
    arrayManager.run();
    return 0;
}
