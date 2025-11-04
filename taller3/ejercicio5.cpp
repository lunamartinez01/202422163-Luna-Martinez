#include <iostream>
using namespace std;


void showAdults() {
    string name[5] = {"Carlos", "Marta", "Lucía", "Tomás", "Sofía"};
    int age[5] = {20, 16, 22, 15, 19};

    cout << "Personas mayores de edad: " << endl;

    for (int i = 0; i < 5; i++) {
        if (age[i] >= 18) {
            cout << name[i] << " - Edad: " << age[i] << endl;
        }
    }
}

int main() {
    showAdults(); 
    return 0;
}