#include <stdio.h>

int main() 
{
    int n, i;
    long long producto = 1;
    
    printf("Ingrese N: ");
    scanf("%d", &n);
    
    if(n < 1) {
        printf("N debe ser mayor o igual a 1.\n");
        return 1;
    }
    
    for(i = 1; i <= n; i++) {
        producto = producto * i;
    }
    
    printf("El producto de los primeros %d numeros naturales es: %lld\n", n, producto);
    
    return 0;
}
