#include<stdio.h>
#include<stdlib.h>
int* aloca(int n){
	int* indexes= (int*)malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++){
		scanf("%d",indexes+i);
	}
	return indexes;
}
int maiormenor(int* indexes,int n,int* maior,int* menor){
	int i,j,pos,aux;
	for(i=0;i<n;i++){
		if(i==0){
			*maior=*(indexes+i);
			*menor=*(indexes+i);
		}
		if(*maior<*(indexes+i)){
			*maior=*(indexes+i);
		}
		if(*menor>*(indexes+i)){
			*menor=*(indexes+i);
		}
	}
	
}
int main(){
	int n,maior,menor,*vetor;
	printf("Informe o tamanho:\n");
	scanf("%d",&n);
	vetor=aloca(n);
	maiormenor(vetor,n,&maior,&menor);
	printf("Maior valor:%d\n",maior);
	printf("Menor Valor:%d\n",menor);
	free(vetor);
	return 0;
}
