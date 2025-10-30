#include <iostream>

using namespace std;

void forWithArray (){
    string products[3] = {"Pan", "Leche", "Queso"};
    float prices[3] = {1500, 3200, 4800};

    for (int i = 0; i < 3; i++){
        string arrayValue = products [i];
        float arrayPrice = prices [i];
        cout << "El producto: " << arrayValue << endl;
        cout << "Tiene un valor de: " << arrayPrice << endl;

    }
    
}

int main (){
    forWithArray ();
    return 0;
}