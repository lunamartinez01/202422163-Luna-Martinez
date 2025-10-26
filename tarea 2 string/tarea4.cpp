#include <iostream>
using namespace std;

int contarPalabras(string phrase) {
    int contador = 1;
    for (int i = 0; i < phrase.size(); i++) {
        if (phrase[i] == ' ') {
            contador++;
        }
    }
    return contador;
}

int contarPuntuacion(string phrase) {
    int contador = 0;
    for (int i = 0; i < phrase.size(); i++) {
        char c = phrase[i];
        if (c == ',' || c == '.' || c == ';' || c == ':' || c == '!' || c == '?') {
            contador++;
        }
    }
    return contador;
}

bool terminaEnPunto(string phrase) {
    if (phrase[phrase.size() - 1] == '.') {
        return true;
    } else {
        return false;
    }
}

void evaluatePhrase() {
    string phrase;
    cout << "Ingrese una frase: ";
    cin >> phrase;

    cout << "Palabras: " << contarPalabras(phrase) << endl;
    cout << "Signos de puntuacion: " << contarPuntuacion(phrase) << endl;

    if (terminaEnPunto(phrase)) {
        cout << "La frase termina con punto" << endl;
    } else {
        cout << "La frase no termina con punto" << endl;
    }
}

int main() {
    evaluatePhrase();
    return 0;
}