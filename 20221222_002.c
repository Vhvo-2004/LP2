/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
float Y,X[90],e,m,M;
int i;

int main()
{
    for(i=0;i<5;i++){
        scanf("%f",&Y);
        if(i==0){
            m=Y;
            M=Y;
        }
        if(M<Y){
            M=Y;
        }
        if(m>Y){
            m=Y;
        }
        
        
    }
    printf("Menor:%f\nMaior:%f\n",m,M);
    return 0;
}
