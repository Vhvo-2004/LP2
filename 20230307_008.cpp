#include<stdio.h>
void troca(float *a,float*b){
	float aux;
	printf("Antes da troca:x=%.2f\ny=%.2f\n",*a,*b);
	aux=*a;
	*a=*b;
	*b=aux;
	printf("Depois da troca:x=%.2f\ny=%.2f\n",*a,*b);
}
int main(){
	float x,y,*a,*b;
	x=2.8;
	y=-5.4;
	a=&x;
	b=&y;
	troca(a,b);
	return 0;
}
