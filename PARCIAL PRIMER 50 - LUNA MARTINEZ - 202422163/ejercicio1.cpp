#include <iostream>
using namespace std;
void checkPackages(int totalPackages) {
    if (totalPackages % 2 == 0) {  
        for (int i = 2; i <= totalPackages; i += 2) {
            cout << i << " ";
        }
    } else {  
        for (int i = 1; i <= totalPackages; i += 2) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int totalPackages;
    cout << "Ingrese la cantidad de paquetes: ";
    cin >> totalPackages;

    cout << "Paquetes revisados: ";
    checkPackages(totalPackages); 

    return 0;
}
