#include <stdio.h>

int main() 
{
    float sueldo, nuevo;
    
    printf("Ingrese el sueldo: ");
    scanf("%f", &sueldo);
    
    if(sueldo < 1000) {
        nuevo = sueldo * 1.15;
    } else {
        nuevo = sueldo * 1.12;
    }
    
    printf("Nuevo sueldo: %.2f\n", nuevo);
    
    return 0;
}
