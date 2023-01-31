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
void multiplicarporescalar(int a[MAX][MAX],int k,int i,int j){
    int c,l;
    for(l=0;l<i;l++){
        for(c=0;c<j;c++){
            a[l][c]=k*a[l][c];
        }
    }
    for (l=0;l<i;l++){
        printf ("\n");
        for (c=0;c<j;c++){
            printf (" %d", a[l][c]);
        }
    }
    
}
void procurar(int a[MAX][MAX],int k,int i,int j){
    int c,l,r;
    r=0;
    for(l=0;l<i;l++){
        for(c=0;c<j;c++){
            if(a[l][c]==k){
                printf("O numero está na %d linha %d coluna da matriz\n",l+1,c+1);
                r=1;
            }
        }
    }
    if(r==0){
        printf("Nao encontrado\n");
    }
}
int main()
{
i1=3;
j1=3;
    int k;
    leituraM1(m1);
    printf("Por qual numero deseja procurar?\n");
    scanf("%d",&k);
    procurar(m1,k,i1,j1);
    return 0;
}

