#include<stdio.h>
#include<string.h>
void codificar(char c[]){
    int z,i;
    z='a'-'A';
    printf("String antes da codificacao:%s \n",c);
for(i=0;i<strlen(c);i++){
    if(c[i]>'Z'){
        c[i]=c[i]-z;
    }
    if(c[i]==' '){}else{
    if(c[i]=='Z'||c[i]=='X'||c[i]=='Y'){
        c[i]=c[i]-23;
    }else{
        c[i]=c[i]+3;
    }
    
}}
 printf("String depois da codificacao:%s \n",c);
}

char T[90];
int main(){
    scanf("%89[^\n]s",T);
    codificar(T);
        return 0;
    }
