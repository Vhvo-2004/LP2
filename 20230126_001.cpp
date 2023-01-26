#include<stdio.h>
int C[100][100],A[100][100],V[100][100];
void SomaM(int n, int m){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&C[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			V[i][j]=A[i][j]+C[i][j];
			printf("%d",A[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",C[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			
			printf("%d",V[i][j]);
		}
		printf("\n");
	}
}
int i,j;
int main(){
	i=3;
j=5;
	SomaM(i,j);
	
	return 0;
}
