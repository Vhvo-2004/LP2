#include<stdio.h>
#include<string.h>
void palindromo(char c[]){
    int i,y,z,j,t;
    z='a'-'A';
   int size_c=strlen(c);
    y=0;
    t=0;
    for(i=0;i<size_c;i++){
        if(c[i]==' '){
            for(j=i;j<size_c;j++){
                c[j]=c[j+1];
            }
            i--;
            size_c--;
            t++;
        }
        if(c[i]<='Z'){
            c[i]=c[i]+z;
        }
    }
    for(i=0;i<strlen(c);i++){
        if(c[strlen(c)-i-1]==c[i]){
            y++;
        }
    }
    if(y==size_c){
        
        printf("Eh palindromo\n");
    }else{
        
        printf("Nao eh palindromo\n");
    }
}

int main(){
    char T[90];
    scanf("%89[^\n]s",T);
    palindromo(T);
        return 0;
    }
