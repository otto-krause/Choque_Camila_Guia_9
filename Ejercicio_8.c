#include <stdio.h>
#include <stdlib.h>

int main()
{
     int limite=10, positivo=0,nulos=0,negativos=0;
     int numero,c=1;
printf("Ingrese %d numeros\n",limite);
    do
    {
         scanf("%d",&numero);
         if (numero<0)
         {
              negativos++;
         }
         else
         {
              if(numero==0)
              {
                   nulos++;
              }
              else
              {
                   if(numero>0)
                   {
                        positivo++;
                   }
              }
         }

         c++;
    }while(c<=limite);
printf("\nHay:\n%d numeros negativos\n%d numeros positivos\n%d numeros igual a cero",negativos,positivo,nulos);
    return 0;
}
