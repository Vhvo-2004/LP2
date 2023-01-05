/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void scanintintervalo (int a){
    while(1){
        
    if(a<1000 && a>0){
        break;
    }else{
       
        printf("Informe um valor valido!No intevalo de: ]0,1000[\n");
        scanf("%d",&a);
    }  
        
    }
}
int perc(float a,float b){
    float perc;
    perc=(a/b)*100;
    printf("%.2f% \n",perc);
    return perc;
}

int absdif(int a, int b){
    int mod;
    if(a>b){
        mod=a-b;
        
    }else{
        mod=b-a;
    }
    return mod;
}

int x,y;
float p,xf,yf;
int main()
{
    scanf("%d",&x);
    scanintintervalo(x);
    scanf("%d",&y);
    scanintintervalo(y);
    xf=x;
    yf=y;
    if(x>y){
        p=perc(yf,xf);
        printf("%d eh o modulo da diferenca",absdif(x,y));
    }else{
        p=perc(xf,yf);
        printf("%d eh o modulo da diferenca",absdif(x,y));
    }
    

    return 0;
}
