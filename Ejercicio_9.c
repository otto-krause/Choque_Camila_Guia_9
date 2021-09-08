#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i=1,personas=4,menos=0,mas=0,igual=0;
 float sueldo;
 printf("Ingrese el sueldo de cada persona registrada:\n\n\n");
 system("pause");
while (i<=personas)
{
     system("cls");
     printf("Sueldo de persona %d\n",i);
     scanf("%f", &sueldo);
     if (sueldo>2000)
          {
               mas++;
          }
          else
               {
                    if(sueldo<2000)
                    {
                         menos++;
                    }
                    else
                         {
                              if(sueldo==2000)
                              {
                                   igual++;
                              }
                         }
               }

     i++;
}

system("cls");
printf("REGISTROS:\n%d personas gana menos de $2000.\n%d personas gana mas de $2000.\n%d personas gana $2000\n",menos,mas,igual);

 return 0;
}
