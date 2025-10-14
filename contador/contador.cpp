#include <iostream>

using namespace std;

void forWithString (){
    cout << "______________ " << endl;
    string exampleTest = "otorrinolaringologo";
    for (int i = 0; i < exampleTest.size(); i++)
    {
        char variableCounter = exampleTest[i]; 
        if (variableCounter == 'o')
        {
            cout << "se encontro" << endl;
        }
        //cout << "position" << i << "-" << textCharacter << endl;
}
}
int main (){
    forWithString();
    return 0;
}