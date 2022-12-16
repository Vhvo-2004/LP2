#include <stdio.h>
#include <math.h>
float S2,S1,T;
# define PI 3.14
int main()
{
    printf("Insira o tamanho do lado do quadrado:\n");
    scanf("%f",&S1);
    printf("Area: %.2f\n",S1*S1);
    printf("O dobro da area:%.2f\n",2*S1*S1);
    

    return 0;
}