#include<stdio.h>
#define MAX 100
int i1,j1,i2,j2;
int m1[MAX][MAX];
int m2[MAX][MAX];
int m3[MAX][MAX];
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

void imprimir(int a[MAX][MAX], int i,int j){
    int c,l,r;
    r=0;
    printf("Diagonal Principal:\n");
    for(l=0;l<i;l++){
        printf("\n");
        for(c=0;c<j;c++){
            if(l==c){
                printf(" %d",a[l][c]);
            }
            printf(" ");
        }
    }
    printf("\nDiagonal Secundaria:\n");
    for(l=0;l<i;l++){
        printf("\n");
        for(c=0;c<j;c++){
            if(l+c==4){
                printf(" %d",a[l][c]);
            }
            printf(" ");
        }
    }
    printf("\nSoma da linha 4:\n");
    int S1=0;
    for(c=0;c<j;c++){
        S1=S1+a[3][c];
        }
    printf("%d\n",S1);
    printf("\nSoma da coluna 2:\n");
    int S2=0;
    for(l=0;l<i;l++){
        S2=S2+a[l][1];
        }
    printf("%d\n",S2);
    printf("Sem Diagonal Principal:\n");
    for(l=0;l<i;l++){
        printf("\n");
        for(c=0;c<j;c++){
            if(l==c){
                printf(" ");
            }else{
            printf(" %d",a[l][c]);}
        }
    }
}
    
int somalinha(int a[MAX][MAX],int j,int k){
    int S,c;
    S=0;
    for(c=0;c<j;c++){
        S=S+a[k][c];
    }
    return S;
}
int somacoluna(int a[MAX][MAX],int i,int k){
    int S,l;
    S=0;
    for(l=0;l<i;l++){
        S=S+a[l][k];
    }
    return S;
}
void quadradoMagico(int a[MAX][MAX],int i,int j){
    int c,l;
    int S=0;
    int aux=0;
    int r=1;
    int Sl[5];
    int Sc[5],Ss;
    Ss=0;
    for(l=0;l<i;l++){
        Sl[l]=0;
        Sc[l]=0;
    }
    for(l=0;l<i;l++){
        for(c=0;c<j;c++){
            if(l==0 && c==0){
                aux=a[l][c];
            }else{
            if(aux == a[l][c]){
                r=0;
            }}
            if(c==l){
        S=S+a[l][c];
}
        }
    }
    for(l=0;l<i;l++){
        Sl[l]=somalinha(a,j,l);
        printf("%d\n",Sl[l]);
    }
    for(c=0;c<j;c++){
        Sc[c]=somacoluna(a,i,c);
        printf("%d\n",Sc[c]);
    }
    for(l=0;l<i;l++){
        Ss=Ss+a[l][l];
    }
    for(l=0;l<i;l++){
        for(c=0;c<j;c++){
        if(Sl[l]!=Sc[c]){
            r=0;
        }
        }
    }
    l=0;
    if(Sl[l]!=Ss || Sl[l]!=S){
         printf("a%d\n",Ss);
         printf("b%d\n",S);
        r=0;
    }
    if(r==1){
        printf("A matriz eh quadrado magico\n");
    }else{
        printf("A matriz nao eh quadrado magico\n");
    }
    
    }
void MostrarM1(int a[MAX][MAX],int i,int j){
    int c,l,r;
    r=0;
    printf("A matriz:\n");
    for(l=0;l<i;l++){
        printf("\n");
        for(c=0;c<j;c++){
        printf(" %d",a[l][c]);
        }
    }
}
int custoitinerario(int a[MAX][MAX],int k){
    int l,c;
    int custo=0;
    int V[k];
    printf("O custo do itinerario:\n");
      for(c=0;c<k;c++){
         scanf("%d",&V[c]); 
    } 
    for(c=0;c<k-1;c++){
          custo=a[V[c]][V[c+1]]+custo;
    }
    return custo;
    
    
}
int Multiplicarmatrizes(int a[MAX][MAX],int b[MAX][MAX],int d[MAX][MAX],int l1,int c1,int l2,int c2){
    int l,c,w;
    if(c1!=l2){
        printf("Nao eh possivel multiplicar essas matrizes\n");
        return 0;
    }else{
        for(l=0;l<l1;l++){
            for(c=0;c<c2;c++){
                for(w=0;w<c1;w++){
                    d[l][c]=d[l][c]+(a[l][w]*b[w][c]);
                }
            
        }
        }
            
        }
        
        
        return 1;
        
    }

int main()
{
    printf("Numero de linhas da matriz 1:");
    scanf("%d",&i1);
    printf("Numero de colunas da matriz 1:");
    scanf("%d",&j1);
    leituraM1(m1);
    printf("Numero de linhas da matriz 2:");
    scanf("%d",&i2);
    printf("Numero de colunas da matriz 2:");
    scanf("%d",&j2);
    leituraM2(m2);
    printf("\n");
    Multiplicarmatrizes(m1,m2,m3,i1,j1,i2,j2);
    printf("M1:");
    MostrarM1(m1,i1,j1);
        printf("\n");
        printf("M2:");
        MostrarM1(m2,i2,j2);
        
        printf("\n");
        printf("M1*M2:");
        MostrarM1(m3,i1,j2);
    
    return 0;
}
