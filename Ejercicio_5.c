#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,mult=1,i=0;
    printf("Ingrese dos numeros: \n");
    printf("\nNUMERO DE BASE: ");
    scanf("%d",&A);
    printf("NUMERO DE EXPONENTE: ");
    scanf("%d",&B);
    while (i<B)
{
if (B==0 && B==1)
{
    mult=1;
    i++;
}
else
{
    mult=mult*A;
    i++;
}
}
printf("\nLa potencia de %d, es: %d",A,mult);

    return 0;
}
