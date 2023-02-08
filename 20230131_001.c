#include<stdio.h>
#include<string.h>
char V[100];
char c[100];
void inversa(char c[]){
	int i;
	for(i=strlen(c)-1;i>=0;i--){
		printf("%c",c[i]);
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
		V[i]=maiuscula(c[i]);
	}
	for(i=0;c[i]!='\0';i++){
			printf(" %c",V[i]);
	}
	
}
int contacaracter(char c[],char l){
    int i,j;
    j=0;
    for(i=0;c[i]!='\0';i++){
        if(c[i]==l){
            j++;
        }
    }
    return j;
}
void excluicaracter(char c[],char l){
    int i,j,w;
    int size_str=strlen(c);
    j=0;
    w=0;
    for(i=0;i<size_str;i++){
        if(c[i]==l){
            for(j=i+w;j<strlen(c);j++){
                c[j]=c[j+1];
            }
            size_str--;
            i--;
        }
    }
    for(i=0;i<strlen(c);i++){
        printf("%c",c[i]);
        
    }
    
    
    
}
int main(){
	char c[]="braaaqssssqqqqq";
	char l='q';
	inversa(c);
	printf("\n");
	noVogal(c);
	printf("\n");
	CAPSLOCK(c);
	printf("\n");
	printf("o caracter %c se repete %d ",l,contacaracter(c,l));
	printf("\n");
	excluicaracter(c,l);
	return 0;
}