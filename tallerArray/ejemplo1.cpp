#include <iostream>

using namespace std;

void forWithArray (){
    string employees[4] = {"Ana", "Luis", "María", "Pedro"};
    
    for (int i = 0; i < 4; i++){
        
        string arrayValue = employees [i];
        cout << "El nombre del empleado es: " << arrayValue << endl;

    }
    

}
int main (){
    forWithArray ();
    return 0;
}