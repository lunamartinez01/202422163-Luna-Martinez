#include <iostream>
using namespace std;

void showProducts() {
    string products[5] = {"Pan", "Leche", "Queso", "Cereal", "Jugo"};
    float prices[5] = {1500, 3200, 4800, 2500, 2100};
    float total = 0;

    cout << "Lista de productos y sus precios:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << products[i] << " - $" << prices[i] << endl;
        total += prices[i];
    }

    cout << "Suma total de precios: " << total << endl;

    cout << "Productos con precio mayor o igual a 2500:" << endl;

    for (int i = 0; i < 5; i++) {
        if (prices[i] >= 2500) {
            cout << products[i] << " - $" << prices[i] << endl;
        }
    }
}

int main() {
    showProducts(); 
    return 0;
}