
#include <stdio.h>
#include <math.h>
float Y,X[90],e,m,M,SPF,k,i;
int l,SI,SP,w,P;

int main()
{
    scanf("%d",&P);
    for(l=1;l<P;l++){
        if(P%l==0){
            SP=SP+l;
        }
        
    }
    if(SP==P){
        printf("%d eh perfeito\n",P);
        
    }else{
        printf("%d nao eh perfeito\n",P);
    }
    return 0;
}
