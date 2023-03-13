#include<stdio.h>

int main(){
	int V[8];
	int *i=V;
	int j;
	for(j=0;j<8;j++){
		printf("O valor %d:",j);
		scanf("%d",i + j);
		
	}
	for(j=0;j<8;j++){
		printf("O valor %d dobrado:%d\n",j,*(i+j) + *(i+j));
	}
	for(j=0;j<8;j++){
		if(*(i+j)%2==0){
			printf("Endereco:%p\n",i+j);
		}
	}
	return 0;
}
