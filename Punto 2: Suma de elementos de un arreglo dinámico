#include <stdio.h>
#include <stdlib.h>

int suma(int *arr, int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += *(arr + i);
    }
    return total;
}

int main() {
    int n;
    printf("Ingrese el tamaño: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Ingrese valor %d: ", i + 1);
        scanf("%d", (arr + i));
    }

    printf("Suma: %d\n", suma(arr, n));

    free(arr);
    return 0;
}
