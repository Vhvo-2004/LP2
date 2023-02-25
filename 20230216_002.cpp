#include<stdio.h>
#define Max 100
int C[Max],t;

void interseccao(int A[],int B[]){
	int i,j,c;
	c=1;
	for(i=1;i<=A[0];i++){
		for(j=1;j<=B[0];j++){
			if(A[i]==B[j]){
				C[c]=B[j];
				c++;
			}
			
		}
	}
	C[0]=c;
}
void leitura(){
	int i,j,n,l;
	int tam[100];
	printf("O valor de n:");
	scanf("%d",&n);
	int conj[n][101];
	for(i=0;i<n;i++){
		printf("O tamanho do %d conjunto:\n",i+1);
		scanf("%d",&tam[i]);
		conj[i][0]=tam[i];
		for(j=1;j<=tam[i];j++){
			scanf("%d",&conj[i][j]);
		}
	}
	int aux[100],aux1[100],aux2[100];
	
	for(i=0;i<n-1;i++){
		for(j=0;j<=tam[i];j++){
			aux[j]=conj[i][j];
		}
		for(j=0;j<=tam[i+1];j++){
			aux1[j]=conj[i+1][j];
		}
		if(i==0){
		interseccao(aux,aux1);
		}else{
			interseccao(C,aux1);
		}
	}
	
}
 int main(){
 	int i;
 	leitura();
 		printf("A intersecao eh:\n tamanho do conjunto:%d\n",C[0]-1);
	for(i=1;i<C[0];i++){
		printf("\t%d",C[i]);
	}
	printf("\n");
 	return 0;
 }
