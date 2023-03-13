#include<stdio.h>
#define n 8
void minmax(int a[n],int *min,int *max){
	int *i,j;
	i=a;
	for(j=0;j<n;j++){
		if(i+j==a){
			min=i;
			max=i;
		}else{
			if(*(i+j)<*min){
				min=i+j;
			}if(*(i+j)>*max){
				max=i+j;
			}
		}
	}
	printf("Minimo valor:%d\nMaximo valor:%d\n",*min,*max);
}
int main(){
	int V[8]={1,3,10,2,0,-1,6,7},*a,*b;
	minmax(V,a,b);
	
	return 0;
}
