#include <stdio.h>
#include <math.h>
int t;

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
void verificar1(int X, int Y){
    int l;
    if(Y>X){
        t=0;
    }else{
        l=pow(10,Quantidadecasas(Y));
        if(X % l == Y){
            t=1;
           
        }else{
            t=0;
            
        }
        
        
    }
    
}

void verificar2(int X,int Y){
    if(X>Y){
        printf("não eh segmento\n");
    }else{
    while(1){
        
        verificar1(Y,X);
        Y=Y/10;
        if(t==1){
            printf("eh segmento\n");
            break;
        }
        if(t==0 && Quantidadecasas(X)>Quantidadecasas(Y)){
            printf("nao eh segmento\n");
            break;
        }
    }
        
    }
    
}
int n,d,k;
int main()
{
    scanf("%d",&n);
    scanf("%d",&k);
    verificar2(n,k);
    return 0;
}