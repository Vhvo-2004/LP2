/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float S,Sf;
int main()
{
    printf("Insira o valor do salario:\n");
    scanf("%f",&S);
    Sf=1.1*S;
    printf("O salario com reajuste sera: %.2f \n",Sf);
    

    return 0;
}
