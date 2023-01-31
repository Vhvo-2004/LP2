#include<stdio.h>
void inversa(char c[]){
	int i;
	for(i=sizeof(c)-1;i>=0;i--){
		printf(" %c",c[i]);
	}
}
void noVogal(char c[]){
	int i;
	for(i=0;c[i]!='\0';i++){
		if(c[i] == 65 || c[i] == 97 || c[i] == 69 || c[i] == 102 || c[i] == 73 || c[i] == 105 || c[i] == 79 || c[i]== 111 || c[i]== 85 || c[i]== 117){
	}else{
		printf(" %c",c[i]);
	}
}
}
char maiuscula(char c){
	char maiuscula=c;
	if(c>=90||c<=122){
		maiuscula=c-32;
	}
	return maiuscula;
}
void CAPSLOCK(char c[]){
	int i=0;
	for(i=0;c[i]!='\0';i++){
		c[i]=maiuscula(c[i]);
	}
	for(i=0;c[i]!='\0';i++){
			printf(" %c",c[i]);
	}
	
}
int main(){
	char c[]="brasil";
	char l='j';
	inversa(c);
	printf("\n");
	noVogal(c);
	printf("\n");
	CAPSLOCK(c);
	return 0;
}
