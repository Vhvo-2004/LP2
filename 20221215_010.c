#include <stdio.h>
#include <math.h>
float T,k1,k2,k3;
int S1,S2;
# define PI 3.14
int main()
{
    printf("Informe a altura(metros)\n");
    scanf("%f",&k1);
    k2=(72.7*k1) - 58;
    printf("Seu peso ideal: %.1fKg\n",k2);
   
   
    

    return 0;
}