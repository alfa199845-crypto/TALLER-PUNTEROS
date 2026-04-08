#include <stdio.h>

int mayor(int *arr, int n) {
    if (n <= 0) {
        printf("Arreglo vacío\n");
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
    int arr[] = {3, 7, 2, 9, 5};
    int n = 5;

    printf("Mayor: %d\n", mayor(arr, n));

    return 0;
}
