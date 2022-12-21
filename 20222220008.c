#include <stdio.h>
#include<string.h>
int n,i,j,x,w;
char V[5];

/*n-Numero de alunos
*/
int main()
{
    
    float nota,soma,M[4],m[4],k,l,maior,menor;
    float media[100];
    i=1;
    while(1){
        soma=0.0;
        printf("Adicione a nota do aluno %d:\n",i);
        for(j=0;j<3;j++){
            scanf("%f",&nota);
            
            if(nota>M[j]){
                M[j+1]=nota;
            }
            soma=soma+nota;
            if(maior<soma){
                maior=soma;
            }
            if(i==1){
            m[j+1]=nota;
        }if(nota<m[j]){
            m[j+1]=nota;
            
        }
        }
        if(i==1){
            menor=soma;
        }
        if(soma<menor){
            menor=soma;
        }
        media[i]=soma/3;
        printf("Deseja Continuar?\n");
        scanf("%s",V);
        if(strcmp(V,"Nao")==0||strcmp(V,"nao")==0||strcmp(V,"NAO")==0){
            break;
        }
        i++;
        V[0]='\0';
    }
    n=i;
    for(x=1;x<=n;x++){
        printf("Media do aluno %d:%.2f\n",x,media[x]);
        
        
    }
    for(x=1;x<=3;x++){
        printf("Maior nota no exame %d:%.2f\n",x,M[x]);
        printf("Menor nota no exame %d:%.2f\n",x,m[x]);
        
        
    }
    k=maior/3;
    l=menor/3;
    printf("Maior Media:%.2f\n",k);
        printf("Menor Media:%.2f\n",l);
    return 0;
    
}