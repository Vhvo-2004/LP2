#include<stdio.h>
int verif(int a){
	while(a<0||a>100){
		printf("Escreva um inteiro menor igual a 100 e positivo");
		scanf("%d",&a);
	}
	return a;
}
int fat(int fat){
	int i,n;
	n=1;
	for(i=1;i<=fat;i++){
		n=n*i;
	}
	return n;
}
void reverso(int n){
	int C[100],i,V[100];
	n=verif(n);
	for(i=0;i<n;i++){
		scanf("%d",&C[i]);
	}
	printf("Numero lido:");
	for(i=0;i<n;i++){
		printf("%d ",C[i]);
	}
		printf("\nNumeros pares lidos:");
	for(i=0;i<n;i++){
	    if(C[i]%2==0){
	        printf("%d ",C[i]);
	    }
	
	}

}
int n;
int main(){
	scanf("%d",&n);
	reverso(n);
	
	return 0;
}