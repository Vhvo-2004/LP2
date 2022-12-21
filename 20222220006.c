/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int i,j;

int main()
{
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            printf("|%d X %d=%d|  ",i,j,i*j);
        }
        printf("\n");
    
        
    }

    return 0;
}
