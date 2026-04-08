#include <iostream>
using namespace std;

int duplicar(int x) {
    return x * 2;
}

int triplicar(int x) {
    return x * 3;
}

void aplicar(int *arr, int n, int (*func)(int)) {

    for (int i = 0; i < n; i++) {
        *(arr + i) = func(*(arr + i));
    }
}

int main() {

    int n;

    cout << "Ingrese cantidad de numeros: ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> *(arr + i);
    }

    int opcion;

    cout << "\n1. Duplicar\n2. Triplicar\nOpcion: ";
    cin >> opcion;

    if (opcion == 1) {
        aplicar(arr, n, duplicar);
    } else {
        aplicar(arr, n, triplicar);
    }

    cout << "\nResultado:\n";

    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";
    }

    cout << endl;

    delete[] arr;

    return 0;
}
