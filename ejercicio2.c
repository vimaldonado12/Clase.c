#include <stdio.h>

int main() 
{
    float r, area, circ;
    printf("Ingrese el radio: ");
    scanf("%f", &r);
    
    area = 3.1416 * r * r;
    circ = 2 * 3.1416 * r;
    
    printf("Area: %.2f\n", area);
    printf("Circunferencia: %.2f\n", circ);
    return 0;
}
