#include <stdio.h>

int main() 
{
    int arreglo[10];
    int i, num, contador = 0;

    // Leer arreglo
    for(i = 0; i < 10; i++) {
        printf("Ingrese el numero %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // Numero a buscar
    printf("Ingrese el numero a buscar: ");
    scanf("%d", &num);

    // Buscar coincidencias
    for(i = 0; i < 10; i++) {
        if(arreglo[i] == num) {
            contador++;
        }
    }

    // Resultado
    printf("El numero %d aparece %d veces.\n", num, contador);

    return 0;
}
