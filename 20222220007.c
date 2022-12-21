/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int n,i,j;

/*n-Numero de alunos
*/
int main()
{
    scanf("%d",&n);
    float media[n],nota,soma,M[3],m[3],k,l,maior,menor;
    for(i=1;i<=n;i++){
        soma=0;
        for(j=0;j<3;j++){
            scanf("%f",&nota);
            if(nota>M[j]){
                M[j]=nota;
            }
            soma=soma+nota;
            
            if(maior<soma){
                maior=soma;
            }
            if(i==1){
            m[j]=nota;
        }if(nota<m[j]){
            m[j]=nota;
            
        }
        }
        if(i==1){
            menor=soma;
        }
        if(soma<menor){
            menor=soma;
        }
        media[i]=soma/3;
    }
    for(i=1;i<=n;i++){
        printf("Media do aluno %d:%.2f\n",i,media[i]);
        
        
    }
    for(i=1;i<=3;i++){
        printf("Maior nota no exame %d:%.2f\n",i,M[i-1]);
        printf("Menor nota no exame %d:%.2f\n",i,m[i-1]);
        
        
    }
    k=maior/3;
    l=menor/3;
    printf("Maior Media:%.2f\n",k);
        printf("Menor Media:%.2f\n",l);
    return 0;
    
}
