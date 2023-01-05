#include<stdio.h>
int G;
float P;
void lerPG(float x,int y){
	scanf("%f",&P);
	scanf("%d",&G);
	
}
void verificar(){
	int meses;
	if(P<100 || G<28){
		printf("Parto não deverá ser realizado, reavaliar clinicamente");
	}else{
	meses=G/4;
	if(P>2500 && G>7){
		printf("Parto Normal\n");
	}else{
	
	if(P>2500 && G<=7){
		printf("Parto Cesariana\n");
	}else{
	
	if((P<2000 && P>1500) && G>9){
		printf("Parto Normal\n");
	}else{
		printf("Parto Cesariana\n");
	}}}
	
	}
	}
	

int main(){
	lerPG(P,G);
	verificar();
	
	
	
	return 0;
}
