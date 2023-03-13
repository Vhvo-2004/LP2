#include <stdio.h>
void impressao(float *a, float *b){
	printf("Os elementos do vetor\n");
	while(a<=b){
		printf("%.1f\n",*a);
		a++;
	}
	
}
int main(){
	float v1[]={0,1,2,3,4.6,4.9,5,4};
	float v2[]={99875.78,5.67,6,5.3,-0.5};
	float v3[]={3.3,5,5.6,8.9};
	impressao(v1,&v1[3]);
	impressao(&v1[2],&v1[5]);
	impressao(v2,&v2[2]);
	impressao(&v2[1],&v2[4]);
	impressao(v3,&v3[3]);
	impressao(&v3[2],&v3[3]);
	
	
	
	
	return 0;
}
