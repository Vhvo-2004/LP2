
#include <stdio.h>
#include<math.h>
float m,M,e,f;
int i,j,h,min,t,s,n,X[90000],k,m1,x,y;
int main()
{
    scanf("%d",&m1);
    scanf("%d",&n);
for(i=0;i<m1;i++){
    for(j=0;j<n;j++){
    f=i*j-pow(i,2)+j;
    if(j==0 && i==0){                        
        M=f;
        }
    if(f>M){
        M=f;
        x=i;
        y=j;
    }
}
    
}
printf("O maior valor obtido:%.2f\nValorX:%d\nValorY:%d\n",M,x,y);
    return 0;
}
