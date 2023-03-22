#include<stdio.h>
#include<stdlib.h>

int main(){
	int n1,n2,m1,m2,i,c,j;
	printf("QTD de Linhas:\n");
	scanf("%d",&n1);
	printf("QTD de colunas:\n");
	scanf("%d",&m1);
	c=0;
	float** matriz1=(float**) malloc(n1 * sizeof(float*));
	for(i=0;i<n1;i++){
		matriz1[i]=(float*) malloc(m1 * sizeof(float));
	}
	for(i=0;i<n1;i++){
		for(j=0;j<m1;j++){
			c++;
			matriz1[i][j]=c;
		}
	}
	printf("QTD de Linhas:\n ");
	scanf("%d",&n2);
	printf("QTD de colunas:\n ");
	scanf("%d",&m2);
	float** matriz2=(float**) malloc(n2 * sizeof(float*));
	for(i=0;i<n2;i++){
		matriz2[i]=(float*) malloc(m2 * sizeof(float));
	}
	for(i=0;i<n2;i++){
		for(j=0;j<m2;j++){
			c++;
			matriz2[i][j]=c;
		}
	}
	float** matrizR=(float**) malloc(n1 * sizeof(float*));
	for(i=0;i<n1;i++){
		matrizR[i]=(float*) malloc(m2 * sizeof(float));
	}
	for(i=0;i<n1;i++){
		for(j=0;j<m2;j++){
		matrizR[i][j]=matriz1[i][j]+matriz2[i][j];
	}
	}float *p;
	p=&matrizR[0][0];
	for(i=0;i<n1;i++){
		for(j=0;j<m2;j++){
		printf("%f ",*(*(matrizR+i)+j));
	}
	printf("\n");}
	for(i=0;i<n1;i++){
		free(matriz1[i]);
		free(matriz2[i]);
		free(matrizR[i]);
	}
	free(matriz1);
	free(matriz2);
	free(matrizR);
	return 0;

}
