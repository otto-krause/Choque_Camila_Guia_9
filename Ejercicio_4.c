#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,fac=1,i=1;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    do
    {
         fac=fac*i;
         i++;
    }
    while(i<=num);
    printf("El factorial de %d es: %d",num,fac);
    return 0;
}
