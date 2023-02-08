#include <stdio.h>
#include<string.h>
char equipe[5][4][100];
char B[50];
int main(){
    int i,j,l,k;
    for(i=0;i<5;i++){
        printf("Equipe %d:\n",i+1);
        for(j=0;j<4;j++){
            printf("Integrante %d\n",j+1);
            scanf("%s", equipe[i][j]);
    }
    }
    printf("Qual o nome deseja buscar entra as equipes?\n");
    scanf("%s",B);
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
        if(strcmp(B,equipe[i][j])==0){
            printf("O %s está na equipe %d",B,i+1);
        }
    }
    }
    
    
    
    return 0;
}