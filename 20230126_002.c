#include<stdio.h>
#define MAX 100
int i1,j1,i2,j2;
int m1[MAX][MAX];
int m2[MAX][MAX];
void somanxn(int a[MAX][MAX], int b[MAX][MAX], int fa, int ca, int fb, int cb){
    int filas, colunas;
    if (fa != fb || ca !=cb){
        printf ("As matrizes não tem a mesma ordem");
        return;
    }
    for (filas=0;filas<fa;filas++){
        printf ("\n");
        for (colunas=0;colunas<ca; colunas++){
            printf (" %d", a[filas][colunas]+b[filas][colunas]);
        }
    }
}
void leituraM1(int a[MAX][MAX]){
    int c,l;
    for(l=0;l<i1;l++){
        for(c=0;c<j1;c++){
            printf("\nElemento da linha %d coluna %d da matriz M1:",l+1,c+1);
            scanf("%d",&m1[l][c]);
    }
    }
    
}
void leituraM2(int a[MAX][MAX]){
    int c,l;
    for(l=0;l<i2;l++){
        for(c=0;c<j2;c++){
            printf("\nElemento da linha %d coluna %d da matriz M2:",l+1,c+1);
            scanf("%d",&m2[l][c]);
    }
    }
    
}
int main()
{
    printf("Numero de linhas da matriz 1:");
    scanf("%d",&i1);
    printf("\nNumero de colunas da matriz 1:");
    scanf("%d",&j1);
     printf("\nNumero de linhas da matriz 2:");
    scanf("%d",&i2);
    printf("\nNumero de colunas da matriz 2:");
    scanf("%d",&j2);
    leituraM1(m1);
    leituraM2(m2);
    somanxn(m1,m2,i1,j1,i2,j2);
    return 0;
}

