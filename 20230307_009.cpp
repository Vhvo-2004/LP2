#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* funcao(char S[],char T,int* tamanho){
	int i,t=0,l,size;
	size=strlen(S);
	char *Pos;
	int* indexes=(int*)malloc(size*sizeof(int));
	Pos=S;
	for(i=0;i<size;i++){
		if(*(Pos+i)==T){
			indexes[t]=i;
			t++;
		}
	}
	*tamanho=t;
	return indexes;
}
int main(){
	char S[500],T='a';
	int tamanho;
	scanf("%s",S);
	int* indexes=funcao(S,T,&tamanho);
	int i;
	for(i=0;i<tamanho;i++){
		printf("%d ",indexes[i]);
	}
	printf("\n Tamanho:%d\n",tamanho);
	free(indexes);
	return 0;
}
