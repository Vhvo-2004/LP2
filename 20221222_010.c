
#include <stdio.h>
#include<math.h>
float m,M,e,f;
int i,j,h,min,t,s,n,X[90000],k,m1,x,y,p,S,aux;
int main()
{
    aux=1;
    scanf("%d",&p);
    for(i=1;i<=p;i++){
        printf("\n%d^3:",i);
        if(i==1){
            aux=1;
            printf("%d ",aux);
        }else{
            s=0;
            for(h=aux+2;;h=h+2){
                s=s+h;
                printf("%d",h);
                if(s==i*i*i){
                    aux=h;
                    break;
                }
                printf(" + ");
            }
            
        }
        
    }
    return 0;
}
