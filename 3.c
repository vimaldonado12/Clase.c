#include <stdio.h>

int main() 
{
    float dolares, pesos;
    printf("Ingrese cantidad en dolares: ");
    scanf("%f", &dolares);
    
    pesos = dolares * 11.96;
    printf("%.2f dolares = %.2f pesos\n", dolares, pesos);
    return 0;
}
