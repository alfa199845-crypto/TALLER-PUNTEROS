#include <iostream>
using namespace std;

void intercambiar(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    cout << "Antes del intercambio:\n";
    cout << "x = " << x << ", y = " << y << endl;

    intercambiar(&x, &y);

    cout << "Después del intercambio:\n";
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}
