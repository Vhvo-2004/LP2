#include <stdio.h>
#include <math.h>
float T,k1,k2,k3;
int S1,S2;
# define PI 3.14
int main()
{
    printf("Informe respectivamente 2 inteiros e 1 real:\n");
    scanf("%d",&S1);
    scanf("%d",&S2);
    scanf("%f",&T);
    k1=2*S1*S2/2;
    k2=3*S1+T;
    k3=T*T*T;
    printf(". o produto do dobro do primeiro com metade do segundo %.2f\n. a soma do triplo do primeiro com o terceiro: %.2f\n. o terceiro elevado ao cubo: %.2f\n",k1,k2,k3);
    
   
    

    return 0;
}