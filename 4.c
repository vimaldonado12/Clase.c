#include <stdio.h>

int main() 
{
    float capital, tasa, interes, total;
    
    printf("Ingrese el capital: ");
    scanf("%f", &capital);
    printf("Ingrese la tasa de interes: ");
    scanf("%f", &tasa);
    
    interes = capital * tasa;
    total = capital + interes;
    
    printf("Interes: %.2f\n", interes);
    printf("Monto final: %.2f\n", total);
    
    return 0;
}
