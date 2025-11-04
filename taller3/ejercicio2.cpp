#include <iostream>
using namespace std;

int contarVocales(string text) {
    int contador = 0;
    for (int i = 0; i < text.size(); i++) {
        char c = text[i];
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            contador++;
        }
    }
    return contador;
}

int contarConsonantes(string text) {
    int contador = 0;
    for (int i = 0; i < text.size(); i++) {
        char c = text[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) {
                contador++;
            }
        }
    }
    return contador;
}


void analyzeText() {
    string text;
    cout << "Ingrese el texto: ";
    cin >> text;

    cout << "Vocales: " << contarVocales(text) << endl;
    cout << "Consonantes: " << contarConsonantes(text) << endl;
}

int main() {
    analyzeText();
    return 0;
}