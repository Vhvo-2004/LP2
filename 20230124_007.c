#include<stdio.h>
int verif(int a){
	while(a<1||a>6){
	    printf("Escreva um inteiro de 1 a 6:");
		scanf("%d",&a);
	}
	return a;
}
int verif1(int a){
	while(a<0){
	    printf("Escreva um numero positivo para o numero de tentativas: ");
		scanf("%d",&a);
	}
	return a;
}
void vicio(int n){
    int i,C[1000],V[1000];
    for(i=1;i<=6;i++){
        V[i]=0;
    }

    n=verif1(n);
    for(i=0;i<n;i++){
        scanf("%d",&C[i]);
        C[i]=verif(C[i]);
        V[C[i]]=V[C[i]]+1;
    }
    for(i=1;i<=6;i++){
        printf("O numero %d caiu %d vezes\n",i,V[i]);
    }
    
    
    
}

int n;
int main(){
	scanf("%d",&n);
	vicio(n);
	
	return 0;
}