#include <iostream>
using namespace std;

int suma(int *arr, int n) {
    int total = 0;

    for (int i = 0; i < n; i++) {
        total = total + arr[i];
    }

    return total;
}

int main() {

    int n;

    cout << "Ingrese cantidad de numeros: ";
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Suma total: " << suma(arr, n) << endl;

    delete[] arr;

    return 0;
}
