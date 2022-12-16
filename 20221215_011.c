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
    printf("Salario Bruto:R$ %.2f\n",S1*S2);
    printf("INSS:R$ %.2f\n",S1*S2*0.08);
    printf("Sindicato:R$ %.2f\n",S1*S2*0.05);
    printf("Salario Liquido:R$ %.2f\n",(S1*S2)-S1*S2*0.08-S1*S2*0.05-S1*S2*0.11);
   
    

    return 0;
}