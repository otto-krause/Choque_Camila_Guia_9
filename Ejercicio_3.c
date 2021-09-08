#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,i=0;
    printf("Ingrese dos numeros:\n");
    scanf("%d",&A);
    scanf("%d",&B);
    i=A+1;
    printf("Los intermedios de %d y %d son:\n\n",A,B);
    do
    {
         printf("%d ",i);
         i++;
    }
    while(i<B);
    printf("\n");
    return 0;
}
