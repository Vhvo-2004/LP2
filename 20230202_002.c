#include <stdio.h>
#include<string.h>
char nomes[20][120],nomes1[20][120];
char B[50];
int t=0;
void imprimir(char c[20][120],int l){
    int i;
    for(i=0;i<l;i++){
        printf("%d.%s\n",i+1,nomes[i]);
    }
    
}
void eliminar(char c[20][120],char b[],int l){
    int i,j;
    for(i=0;i<l;i++){
        if(strcmp(c[i],b)==0){
            for(j=i;j<l;j++){
                strcpy(c[j],c[j+1]);
            }
            i--;
            l--;
            t++;
        }
    }
    printf("A nova lista:\n");
    imprimir(c,l);
}
void ordemABC(char c[20][120],int l){
    int i,j,pos;
    char m[120];
    char aux[120];
    char r;
    for(i=0;i<l-1;i++){
        pos=i;
        for(j=i+1;j<l;j++){
            if(c[pos][0]>c[j][0]){
                pos=j;
            }
       
        }
        if(i!=pos){
            strcpy(aux,c[i]);
                strcpy(c[i],c[pos]);
                strcpy(c[pos],aux);
        }
    }
    imprimir(c,l);
}
void criarlistaABC(char c[20][120],int l,char c2[20][120]){
    int i,j,pos;
    char m[120];
    char aux[120];
    char r;
    for(i=0;i<l-1;i++){
        pos=i;
        for(j=i+1;j<l;j++){
            if(c[pos][0]>c[j][0]){
                pos=j;
            }
       
        }
        if(i!=pos){
            strcpy(aux,c[i]);
                strcpy(c[i],c[pos]);
                strcpy(c[pos],aux);
        }
    }
    for(i=0;i<l;i++){
        strcpy(c2[i],c[i]);
    }
    
}

int main(){
    int i,j,l,k;
    printf("Quantos nomes deseja inserir?\n");
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%s",nomes[i]);
    }
    imprimir(nomes,k);
    printf("Deseja eliminar qual nome da lista?\n");
    scanf("%s",B);
    eliminar(nomes,B,k);
    printf("Em ordem alfabetica:\n");
    ordemABC(nomes,k);
    printf("Lista criada em ordem alfabetica:");
    criarlistaABC(nomes,k,nomes1);
    for(i=0;i<k;i++){
        printf("%s\n",nomes1[i]);
    }
    return 0;
}