#include <iostream>
using namespace std;

int mayor(int *arr, int n) {

    if (n <= 0) {
        cout << "Arreglo vacio\n";
        return 0;
    }

    int *ptr = arr;  
    int max = *ptr;  

    for (int i = 1; i < n; i++) {
        ptr++;  
        if (*ptr > max) {
            max = *ptr;
        }
    }

    return max;
}

int main() {

    int n;

    cout << "Ingrese cantidad de numeros: ";
    cin >> n;

    if (n <= 0) {
        cout << "No hay datos\n";
        return 0;
    }

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> *(arr + i);  
    }

    cout << "Mayor: " << mayor(arr, n) << endl;

    delete[] arr;

    return 0;
}
