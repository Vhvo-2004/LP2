#include<stdio.h>

int main(){
	int a,*A;
	float b,*B;
	char c,*C;
	a=2;
	b=4.5;
	c='D';
	A=&a;
	B=&b;
	C=&c;
	printf("o inteiro antes da modificacao: %d\n",a);
	printf("o real antes da modificacao: %f\n",b);
	printf("o char antes da modificacao: %c\n",c);
	*A=3;
	*B=5.4;
	*C='A';
	printf("o inteiro depois da modificacao: %d\n",a);
	printf("o real depois da modificacao: %f\n",b);
	printf("o char depois da modificacao: %c\n",c);
	
	return 0;
}
