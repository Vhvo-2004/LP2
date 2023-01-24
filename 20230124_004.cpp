#include<stdio.h>
int verif(int a){
	while(a<0||a>100){
		scanf("%d",&a);
	}
	return a;
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
		printf("\nNumero pares lido:");
	for(i=0;i<n;i++){
		if(C[i]%2==0){
		V[i]=C[i];
		printf("%d ",V[i]);
}	}

}
int n;
int main(){
	scanf("%d",&n);
	reverso(n);
	
	return 0;
}
