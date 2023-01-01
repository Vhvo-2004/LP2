
#include <stdio.h>
#include <math.h>
float Y,X[90],e,m,M,SPF,k,i;
int l,SI,SP,w;

int main()
{
    k=1;
    for(i=1;i<=50;i++){
        SPF=((k)/(i))+SPF;
        printf("(%f/%f)\n",k,i);
        k=k+2;
        
    }
    printf("Resultado final:%f\n",SPF);
    
    return 0;
}
