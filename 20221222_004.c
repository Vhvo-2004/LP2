
#include <stdio.h>
#include <math.h>
float Y,X[90],e,m,M;
int i,l,SI,SP,k,w;

int main()
{
    scanf("%d",&l);
for(i=1;i<=l;i++){
   if(l%i==0){
       k++;
   } 
}
    
    
    if(k>2){
        printf("%d nao eh primo!\n",l);
    }else{
        printf("%d eh primo!\n",l); 
    }
    
    return 0;
}
