#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=1,personas=2,dia=2,c=1,sum=0,sum1=0,mayor=0,indice,j=2;
    int cant[dia];
    int ventas[personas];

    printf("Ingrese la cantidad vendida de cada dia, a la persona registrada:\n\n\n");
    system ("pause");
    system ("cls");

do
{
     printf("Persona %d\n\n",i);
         do
         {
              printf("Dia %d\n",c);
              scanf("%d", &cant[c]);
              sum1=sum1+cant[c];
              sum=sum+cant[c];
              c++;
         }while(c<=dia);
     system("cls");
     c=1;
     ventas[i-1] = sum;
     sum=0;
     system("cls");
     i++;

}while(i<=personas);

printf("REGISTRO\n\n\n");
printf("TOTAL DE UNIDADES VENDIDAS (De cada vendedor):");
i=1;
while(i<=personas)
    {
     printf("\nPersona %d\n",i);
     printf("Ventas: %d", ventas[i-1]);
     printf("\n");
     i++;
    }

        printf("\n\n\n");
    system("pause");
    system("cls");
    printf("REGISTRO\n\n\n");
    printf("TOTAL GENERAL:\n%d unidades vendidas.",sum1);
    printf("\n\n\n");
    system("pause");
    system("cls");
    printf(">>REGISTRO<<\n\n\n");

    mayor = ventas[0];
    indice = 1;

    do
    {
    if(ventas[j-1]>mayor)
    {
         mayor=ventas[j-1];
         indice = j;
     }

    j++;
    }while(j<=personas);

    printf("VENDEDOR CON LA MAYOR VENTA DIARIA:\nPersona: %d\nCantidad: %d\n", indice, mayor);

    return 0;
}
