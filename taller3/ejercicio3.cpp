#include <iostream>

using namespace std;

void forWithArray (){
    int age[6] = {18, 21, 25, 30, 27, 22};
    int ageSum = 0;
    
    for (int i = 0; i < 6; i++){
        
        int arrayValue = age [i];
        ageSum = ageSum + arrayValue;
        cout << "Su edad es: " << arrayValue << endl;

    }
    float ageAverage = ageSum / 6;
    cout << "El promedio de las edades es: " << ageAverage << endl;

}
int main (){
    forWithArray ();
    return 0;
}