#include <stdio.h>
int main ()
{
  float n1,n2,n3;
  float op=0;
  printf("Bienvenido a mi calculadora");
  printf("Escoge una opcion\n");
  printf("1.Suma\n");
  printf("2.Resta\n");
  printf("3.Multiplicacion\n");
  printf("4.division\n");
  printf("opcion: ");
  scanf("%d",&op);
  printf("Ingresa dos cantidades separadas por espacio\n");
  scanf("%f %f",&n1,&n2);
  swich(op)
  {
    Default:
     printf("Opcion no valida\n");
    Case 1:
     res=n1+n2
     printf("El resultado es %f\n",res);
     Break;
    Case 2:
     res=n1-n2
     printf("El resultado es %f\n",res);
     Break;
    Case 3:
     res=n1*n2
     printf("El resultado es %f\n",res);
     Break;
    Case 4:
     res=n1/n2
     printf("El resultado es %f\n",res);
     Break;
  }
  return0;
}
