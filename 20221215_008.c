#include <stdio.h>
#include <math.h>
float S2,S1,T;
# define PI 3.14
int main()
{
    printf("Informe a Temperatura em Celsius:\n");
    scanf("%f",&S1);
    S2=(9*(S1)/5)+ 32;
    printf("Temperatura em Farenheit: %.2f\n",S2);
   
    

    return 0;
}