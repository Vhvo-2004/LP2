
#include <stdio.h>
#include <math.h>
int Quantidadecasas(int a){
    int i;
    i=0;
    while(a>0){
        a=a/10;
        i++;
    }
    return i;
}
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
void verificar(int X, int Y){
    int l;
    if(Y>X){
        printf("não corresponde\n");
    }else{
        l=pow(10,Quantidadecasas(Y));
        if(X % l == Y){
           printf("corresponde\n"); 
        }else{
            printf("não corresponde\n");
        }
        
        
    }
    
}


int n,d,k;
int main()
{
    scanf("%d",&n);
    scanf("%d",&k);
    verificar(n,k);
    return 0;
}
