
#include <stdio.h>
int digito(int n, int p){
    int i;
    i=0;
    while(n>0){
        if(n%10==p){
            i++;
        }
        n=n/10;
        
    }
    return i;
}

void perm(int a, int b){
    int i;
    i=0;
    while(1){
        if(digito(a,i)!=digito(b,i)){
            printf("%d nao eh permutação de %d!\n",a,b);
            break;
        }
        i++;
        if(i==9){
           printf("%d eh permutação de %d!\n",a,b);
            break; 
        }
    }
    
}
int n,d,k;
int main()
{
    scanf("%d",&n);
    scanf("%d",&k);
    perm(n,k);
    return 0;
}
