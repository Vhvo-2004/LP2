#include<stdio.h>

int* varredura(int *a, int *b){
	int *i;
	for(i=a;i<b;i++){
		if(*i==2){
			return i;
		}
	}
	return NULL;
}
int main(){
	int V[10]={0,3,4,2,0,2,2,0,0,7};
	int *x,*y;
	x=&V[0];
	y=&V[9];
	while(varredura(x,y)!=NULL){
		printf("%p corresponde ao endereco em que 2 aparece\n",varredura(x,y));
		x=varredura(x,y)+1;
	}
	
	return 0;
}
