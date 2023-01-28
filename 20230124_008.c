#include<stdio.h>
int n;
int escalar(int n){
    int i,V[n],S,A[n],B[n];
    for(i=0;i<n;i++){
        printf("Vetor 1 coordenada %d:\n",i+1);
       scanf("%d",&A[i]);
       printf("Vetor 2 coordenada %d: \n",i+1);
       scanf("%d",&B[i]);
    }
    for(i=0;i<n;i++){
        V[i]=A[i]*B[i];
        S=V[i]+S;
    }
    return S;
}
int verif(int a){
    while(a<1){
        printf("Informe um numero positivo diferente de zero!\n");
        scanf("%d",&a);
    }
    return a;
}


int main(){
    printf("Informe o tamanho dos dois vetores:");
	scanf("%d",&n);
	n=verif(n);
	printf("Produto escalar:%d\n",escalar(n));
	return 0;
}