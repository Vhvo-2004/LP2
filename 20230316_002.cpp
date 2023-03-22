#include<stdio.h>
#include<stdlib.h>

int main(){
	int m,n,i,*ptr,c;
 m=2;
 n=3;
 c=0;
	int** matriz=(int**) malloc(m * sizeof(int*));
	for(i=0;i<m;i++){
		matriz[i]=(int*) malloc(n * sizeof(int));
	}
	
	for(i=0;i<m;i++){
		for(int j=0;j<n;j++){
			c++;
			matriz[i][j]=c;
		}	
	}
	ptr=&matriz[0][0];
	printf("%d e %d \n",&matriz[0][2],&matriz[1][0]);
	printf("Aritmetica Ponteiros:\n");
	//aritmetica de ponteiros
	for(i=0;i<m;i++){
		for(int j=0;j<n;j++){
		printf("%d ",*(ptr + i*(n+5) + j));	
		}
		printf("\n");
	}
	printf("Indexes:\n");
	//Indexes
	for(i=0;i<m;i++){
		for(int j=0;j<n;j++){
		printf("%d ",matriz[i][j]);	
		}
		printf("\n");
	}	
		for(i=0;i<m;i++){
			free(matriz[i]);
		}
		free(matriz);
	
	
}
