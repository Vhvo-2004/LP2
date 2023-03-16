#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void mediaDesvio(int n,float*p,float*m,float*d){
	int i;
	float S,D;
	for(i=0;i<n;i++){
		S=S+*(p+i);
	}
	*m=S/n;
	for(i=0;i<n;i++){
		D=D+(*m-*(p+i))*(*m-*(p+i));
		
	}
	*d=sqrt(D/n);
}
int main(){
	int i,n;
	float k,l;
	float *m,*d;
	m=&k;
	d=&l;
	printf("Quantos alunos na turma?\n");
	scanf("%d",&n);
	float* indexes=(float*)malloc(n*sizeof(float));
	for(i=0;i<n;i++){
		scanf("%f",&indexes[i]);
	}
	mediaDesvio(n,indexes,&k,&l);
	printf("Media:%f \n",*m);
	printf("DesvioPadrao:%f \n",*d);
	free(indexes);
	return 0;
}
