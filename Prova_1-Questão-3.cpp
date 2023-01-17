#include <stdio.h>
#include <math.h>
int verif(int a){
	while(a<0){
	scanf("%d",&a);
	}
	return a;
	}
int hiperfatorial(int a){
	int i,HF;
	HF=1;
	for(i=1;i<=a;i++){
		HF=pow(i,i)*HF;
	}
	return HF;
}	
void print(int a){
	printf("Hiperfatorial:%d\nNumero:%d\n",hiperfatorial(verif(a)),a);
}


 int main(){
 	int t;
 	scanf("%d",&t);
     print(t);
 }
