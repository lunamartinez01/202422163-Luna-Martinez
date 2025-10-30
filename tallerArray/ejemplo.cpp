#include <iostream>

using namespace std;

void forWithArray (){
    string textArray [3] = {"Maria", "Luna", "Vanessa"};
    cout << textArray [0] << endl;
    cout << textArray [1] << endl;
    cout << textArray [2] << endl;
    for (int i = 0; i < 3; i++){
        cout << "Contador en: " << i << endl;
        string arrayValue = textArray [i];
        cout << "El valor en la lista es: " << arrayValue << endl;

    }
    

}
int main (){
    forWithArray ();
    return 0;
}
