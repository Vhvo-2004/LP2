#include <stdio.h>
#include <math.h>
float S2,S1,T;
# define PI 3.14
int main()
{
    printf("Informe a Temperatura em Farenheit:\n");
    scanf("%f",&S1);
    S2=5*(S1-32)/9;
    printf("Temperatura em Celsius: %.2f\n",S2);
   
    

    return 0;
}