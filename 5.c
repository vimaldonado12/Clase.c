#include <stdio.h>

int main() 
{
    float monto, total;
    
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &monto);
    
    // Si la compra es mayor a 2500 se aplica 8% de descuento
    if(monto > 2500) {
        total = monto - (monto * 0.08);
    } else {
        total = monto;
    }
    
    printf("Total a pagar: %.2f\n", total);
    
    return 0;
}
