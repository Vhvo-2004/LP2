#include<stdio.h>
#include<string.h>
char str1[20],str2[20];
char str3[40];
void print(){
    scanf("%s", str1);
}
int tamanho(char c[]){
    int s;
    s=strlen(c);
    return s;
}
void comparacao(char c1[],char c2[]){
    int z;
    printf("A string que vai ser usada para comparar com a S1");
    scanf("%s",c2);
    z=strcmp(c1,c2);
    if(z==0){
        printf("Sao iguais\n");
    }if(z<0){
        printf("a string %s é diferente da string %s\n",c1,c2);
    }if(z>0){
        printf("a string %s é diferente da string %s\n",c1,c2);
    }
    printf("\n");
}
void concatenar(char c1[],char c2[]){
    printf("Qual a string que vai ser concatenada com S1?\n");
    scanf("%s",c2);
    strcat(str3,c1);
    strcat(str3,c2);
    printf("A string concatenada %s\n",str3);
    printf("\n");
}
 void inversa(char c1[]){
     int i;
     for(i=strlen(c1);i>=0;i--){
         printf("%c",c1[i]);
     }
     printf("\n");
 }
int contacaracter(char c1[],char c2){
    int i,t;
    t=0;
    for(i=0;i<strlen(c1);i++){
        if(c1[i]==c2){
            t++;
        }
    }
     
     return t;
 }
void substituicaracter(char C[],char C1,char C2){
    
    int i;
    for(i=0;i<strlen(C);i++){
        if(C[i]==C1){
            C[i]=C2;
        }
    }
    printf("A nova string:%s\n",C);
}
void substring(char c1[],char c2[]){
    int z,i,y,u;
    u=0;
    printf("A string que vai ser usada para comparar com a S1");
    scanf("%s",c2);
    z=strcmp(c1,c2);
    if(z==0){
        printf("Sao Strings iguais\n");
    }if(z<0 || z>0){
       for(i=0;i<strlen(c1);i++){
          if(c1[i]==c2[0]){
              int j;
              y=0;
              for(j=i;j<strlen(c1);j++){
                  if(c1[j]==c2[j-i]){
                      y++;
                      if(y==strlen(c2)){
              u=1;
          }
                  }else{
                      y--;
                  }
              }
              
          }
       }
       if(u==0){
           printf("Nao eh substring\n");
       }else{
           printf("Eh substring\n");
       }
    }
    printf("\n");
}

void criarsubstring(char c[]){
    int i,j,fi,ff;
    printf("A partir de qual endereço deve ser criado a substring de %s\n",c);
    scanf("%d",&fi);
    if(fi>strlen(c)|| fi<0){
        printf("Impossivel!Não existe caractere neste endereço do array\n");
    }else{
        printf("Qual tamanho da string?\n");
        scanf("%d",&ff);
        if(fi+ff>strlen(c)){
            printf("A substring excedeu a string!!\n");
        }else{
            for(i=fi;i<fi+ff;i++){
                str2[i-fi]=c[i];
            }
            for(i=0;i<strlen(str2);i++){
                printf("%c",str2[i]);
            }
        }
    }
    
    
    
}
int main(){
    int k=0;
    char m;
    while(k==0){
        printf("Qual comando deseja fazer?\n(a) Ler uma string S1 (tamanho máximo 20 caracteres)\n(b) Imprimir o tamanho da string S1;\n(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário e imprimir o resultado da comparação;\n(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;\n(e) Imprimir a string S1 de forma reversa;\n(f) Contar quantas vezes um dado caractere aparece na string S1. Esse caractere desse ser informado pelo usuário;\n(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário;\n(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser informada pelo usuário;\n(i) Retornar uma substring da string S1. Para isso o usuário deve informar a partir de qual posição deve ser criada a substring e qual é o tamanho da substring");
    scanf(" %c",&m);
        if(m=='a'){
        print();
        }
        if(m=='b'){
        printf("%d caracteres\n",tamanho(str1));}
        if(m=='c'){
        comparacao(str1,str2);
        }if(m=='d'){
           concatenar(str1,str2); 
        }if(m=='e'){
            inversa(str1);
        }if(m=='f'){
            char r;
            printf("Qual caracter vai ser usado para a anlise da string?\n");
            scanf(" %c",&r);
            printf("%d vezes o caracter %c se repete na string %s\n",contacaracter(str1,r),r,str1);
        }if(m=='g'){
            char C1,C2;
            printf("Qual sera o caracter substituido?\n");
            scanf(" %c",&C1);
            printf("Qual sera o caracter que vai entrar?\n");
            scanf(" %c",&C2);
            substituicaracter(str1,C1,C2);
        }if(m=='h'){
            substring(str1,str2);
        }if(m=='i'){
            criarsubstring(str1);
        
        }
        }
        return 0;
    }
