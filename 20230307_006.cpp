#include<stdio.h>
#define tr 7
int somaarray(int V1[tr],int V2[tr],int vr[tr]){
	int *p1,*p2,*p3,i;
	p1=V1;
	p2=V2;
	p3=vr;
	for(i=0;i<tr;i++){
	*(p3+i)=*(p1+i)+*(p2+i);
}
for(i=0;i<tr;i++){
	printf("%d ",*(p3+i));
}
return 1;
 
}

int main(){
	
	int V1[tr]={1,2,3,4,5,6,1};
	int V2[tr]={2,3,4,5,6,7,8};
	int vr[tr];
	int t1=sizeof(V1)/sizeof(V1[0]);
	int t2=sizeof(V2)/sizeof(V2[0]);
	printf("tamanho do vetor1:%d\ntamanho do vetor 2:%d\n",sizeof(V1),sizeof(V2));
	if(t1!=t2){
		return 0;
	}else{
		somaarray(V1,V2,vr);
	}
	return 0;
}
