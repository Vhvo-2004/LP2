#include <stdio.h>
#include<math.h>
 int main(){
     float M,m,S,l,i;
     i=0;
     l=0;
     while(l>=0){
        scanf("%f",&l);  
        if(l<0){
		}else{
		
		
        if(i==0){
            M=l;
            m=l;
        }
		
		if(M<l){
         M=l;
        }
		if(m>l){
         m=l;
        }
        S=S+l;
        i++;}
     }
     
     printf("Maior Nota:%f\nMenor Nota:%f\nMedia aritmetica:%f\n",M,m,(S/i));
     return 0;
 }
#include<stdio.h>
#include<string.h>
char Nomes[2][100][10][56];
void leitura (char Nomes[2][100][10][56]){
	int i;
	for(i=0;i<2;i++){
		scanf("%s",Nomes[i][10][56]);
	}
	for(i=0;i<2;i++){
		printf("Qual funcao do %s\n",Nomes[i][10][56]);
		scanf("%s",Nomes[i][100][56]);
		printf("\n");
	}
	for(i=0;i<2;i++){
		printf("avaliacao do %s\n",Nomes[i][10][56]);
		scanf("%s",Nomes[i][100][10]);
		printf("\n");
	}
	for(i=0;i<2;i++){
		printf("funcao do %s\n",Nomes[i][10][56]);
		printf("%s\n",Nomes[i][100][56]);
		printf("Avaliacao do %s: %s",Nomes[i][10][56],Nomes[i][100][10]);
		printf("\n");
	}
	
}
int main(){

leitura(Nomes);


return 0;
}
