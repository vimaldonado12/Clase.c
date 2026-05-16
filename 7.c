#include <stdio.h>

int main() 
{
    float distancia, totalKm, precio;
    int dias;
    
    printf("Ingrese la distancia de ida en km: ");
    scanf("%f", &distancia);
    
    printf("Ingrese los dias de estancia: ");
    scanf("%d", &dias);
    
    // Distancia total ida y vuelta
    totalKm = distancia * 2;
    
    // Precio normal
    precio = totalKm * 0.23;
    
    // Aplicar descuento del 30%
    if(dias > 7 && totalKm > 800) {
        precio = precio * 0.70;
    }
    
    printf("Precio del ticket: %.2f\n", precio);
    
    return 0;
}
