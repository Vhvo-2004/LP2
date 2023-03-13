#include<stdio.h>
int ordenar(int*a,int*b,int*c){
	int *i,*j,*pos,aux;	
	for(i=a;i<c;i++){
		pos=i;
		for(j=i+1;j<=c;j++){
			if(*pos>*j){
				pos=j;
			}
		}
		if(pos!=i){
			aux=*i;
			*i=*pos;
			*pos=aux;
		}
	}
	printf("Os valores ordenados:\n");
	for(i=a;i<=c;i++){
		printf("%d\n",*i);
	}
	if(*a==*b && *b==*c){
		printf("Retornou 1\n");
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int V[3],*p1,*p2,*p3;
	p1=&V[0];
	p2=&V[1];
	p3=&V[2];
scanf("%d",p1);
scanf("%d",p2);
scanf("%d",p3);
ordenar(p1,p2,p3);
	
	return 0;
}
