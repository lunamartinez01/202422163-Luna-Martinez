#include <iostream>
using namespace std;

void showTurns(int start, int end) {
    if (start > end) {
        cout << "Error: el turno inicial no puede ser mayor que el final" << endl;
    } else if (start == end) {
        cout << "La máquina trabajó únicamente en el turno: " << start << endl;
    } else {

        cout << "La máquina trabajó en los turnos: ";
        for (int i = start; i <= end; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    int start, end;

    cout << "Ingrese el turno inicial: ";
    cin >> start;
    cout << "Ingrese el turno final: ";
    cin >> end;

    showTurns(start, end);

    return 0;
}