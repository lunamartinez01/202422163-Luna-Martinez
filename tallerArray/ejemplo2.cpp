#include <iostream>

using namespace std;

void forWithArray (){
    float grades[5] = {3.5, 4.0, 2.8, 3.9, 4.2};
    float gradesSum = 0;          
    
    for (int i = 0; i < 5; i++){
        
        float arrayValue = grades [i];
        gradesSum = gradesSum + arrayValue;
        cout << "Su nota es: " << arrayValue << endl;

    }
    float gradeAverage = gradesSum / 5;
    cout << "El promedio de las notas es: " << gradeAverage << endl;

}
int main (){
    forWithArray ();
    return 0;
}
