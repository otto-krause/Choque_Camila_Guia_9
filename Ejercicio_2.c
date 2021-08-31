
#include <stdio.h>
#include <stdlib.h>

int main()
{
int limite=3, i=0,mayor;
float sum=0,num;
printf("Ingresé %d números:\n",limite);
while(i<=limite-1)
{
scanf("%f",&num);
sum=sum+num;
if (i==0)
{
mayor=num;
}
else
{
if (num>mayor)
{
mayor=num;
}
}
i++;
}

printf("\nEl promedio es: %.1f",sum/limite);
printf("\nEl numero mayor es: %d",mayor); 
    return 0;
} 