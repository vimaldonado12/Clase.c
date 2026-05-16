#include <stdio.h>

int main() 
{
    int arreglo[10];
    int i, suma = 0;

    // Leer datos
    for(i = 0; i < 10; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // Sumar elementos
    for(i = 0; i < 10; i++) {
        suma += arreglo[i];
    }

    // Mostrar resultado
    printf("La suma de los elementos es: %d\n", suma);

    return 0;
}
