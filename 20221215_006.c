#include <stdio.h>
#include <math.h>
float S2,S1,T;
# define PI 3.14
int main()
{
    printf("Quanto ganha por hora(R$):\n");
    scanf("%f",&S1);
    printf("Numero de horas trabalhadas:\n");
    scanf("%f",&S2);
    printf("Salario:R$ %.2f\n",S1*S2);
   
    

    return 0;
}