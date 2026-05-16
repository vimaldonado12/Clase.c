#include <stdio.h>

int main() 
{
    int arreglo[10];
    int i;
    int positivos = 0, negativos = 0, nulos = 0;

    // Leer arreglo
    for(i = 0; i < 10; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // Contar
    for(i = 0; i < 10; i++) {

        if(arreglo[i] > 0) {
            positivos++;
        }
        else if(arreglo[i] < 0) {
            negativos++;
        }
        else {
            nulos++;
        }
    }

    // Mostrar resultados
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos: %d\n", nulos);

    return 0;
}
