#include<stdio.h>

int a,b,i,k,M,m;

int main(){
	while(true){
		scanf("%d",&a);
		if(k==0){
			m=a;
			M=a;
		}
		if (a>M){
			M=a;
		}
		if (a<m){
			m=a;
		}
		k++;
		if(k==20){
			break;			
		}
		
	}
	printf("Maior:%d \nMenor:%d\n",M,m);
	
}
