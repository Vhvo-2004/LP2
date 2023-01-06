/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int p;
void verificarpar(int a){
    scanf("%d",&a);
    while(1){
        if(a%2==0){
           p=a;
           break;
        }else{
            printf("Informe um numero valido!\n");
            scanf("%d",&a);
        }
        
    }
    
}
void verificarper(int a){
    int i,s;
    s=0;
    for(i=1;i<a;i++){
        if(a%i==0){
        s=s+i;  
        }
    }
    if(s==a){
        printf("%d eh perfeito\n",a);
    }else{
        
        printf("%d nao eh perfeito\n",a);
    }
    
}
int main()
{
verificarpar(p);
verificarper(p);

    return 0;
}
