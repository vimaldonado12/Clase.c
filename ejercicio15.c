#include <stdio.h>

int main() 
{
    int arreglo[100];
    int i, num = 2;

    // Guardar numeros pares
    for(i = 0; i < 100; i++) {
        arreglo[i] = num;
        num += 2;
    }

    // Imprimir arreglo
    printf("Los primeros 100 numeros pares son:\n");

    for(i = 0; i < 100; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}
