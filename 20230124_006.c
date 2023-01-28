#include<stdio.h>
int l;
void escalar(int n){
    int i,vetor[n];
    for(i=0;i<n;i++){
        printf("Vetor coordenada %d:\n",i+1);
       scanf("%d",&vetor[i]);
    }
    printf("Antes\n[");
   for(int i=0;i<n-1;i++){
       printf("%d,",vetor[i]);
   }
   printf("%d]\n",vetor[n-1]);
    
    for(int i = 0; i < n - 1; i++) {
      int menor = i;
      for(int j = i + 1; j < n; j++) {
         if (vetor[j] < vetor[menor]) menor = j;
      }
      int aux = vetor[i];
      vetor[i] = vetor[menor];
      vetor[menor] = aux;
   }
   printf("Depois\n[");
   for(int i=0;i<n-1;i++){
       printf("%d,",vetor[i]);
   }
   printf("%d]\n",vetor[n-1]);
    
    }

int main(){
    printf("Informe o tamanho do vetor:");
	scanf("%d",&l);
	escalar(l);
	return 0;
}