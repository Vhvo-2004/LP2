/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float h,b;
float a;
int main()
{
    printf("Insira o valor da base:\n");
    scanf("%f",&b);
    printf("Insira o valor da altura:\n");
    scanf("%f",&h);
    a=(b*h)/2;
    printf("A area eh igual a: %.2f",a);
    

    return 0;
}
