#include <iostream>
using namespace std;

void mostrarComoInt(int *p) {
    cout << "\n[Como entero]" << endl;
    cout << "Direccion (int*): " << p << endl;
    cout << "Valor: " << *p << endl;
}

void mostrarBytes(char *p, int n) {
    cout << "\n[Bytes en memoria]" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Byte " << i << ": "
             << hex << (int)*(p + i) 
             << " | direccion: " << (void*)(p + i)
             << endl;
    }
}

int main() {
    float numero;

    cout << "Ingresa un numero decimal: ";
    cin >> numero;

    cout << "\n[Float original]" << endl;
    cout << "Valor: " << numero << endl;
    cout << "Direccion: " << &numero << endl;

    int *pInt = (int*)&numero;
    char *pChar = (char*)&numero;

    mostrarComoInt(pInt);
    mostrarBytes(pChar, sizeof(float));

    return 0;
}
