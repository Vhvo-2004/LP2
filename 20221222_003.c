
#include <stdio.h>
#include <math.h>
float Y,X[90],e,m,M;
int i,l,SI,SP;

int main()
{
    for(i=0;l<1000;i++){
        scanf("%d",&l);
        if(l>1000){break;}
        if(l%2==0){
            SP=SP+l;
        }
        if(l%2!=0){
            SI=SI+l;
        }
    }
    printf("Soma par:%d\nSoma impar:%d\n",SP,SI);
    
    return 0;
}
