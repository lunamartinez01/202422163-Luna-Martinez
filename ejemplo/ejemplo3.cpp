#include <iostream>
using namespace std;

void failasubject (int gradeOne) {
    if (gradeOne >= 3)
    {
        cout << "Usted pasó la materia " << gradeOne << endl;
    }
    else 
    {
        cout << "Usted perdió la materia " << gradeOne << endl;
    }
    
}

int main() {
    int userGrade;
    cout << "Ingrese su nota: ";
    cin >> userGrade;

        failasubject (userGrade);
    return 0;
}