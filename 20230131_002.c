#include <stdio.h>
char carro[5][100];
float consumo[5];
void preencher(){
    int i,j;
    printf("Os modelos de carro que serao analisados:\n");
    for(i=0;i<5;i++){
        scanf("%s",carro[i]);
    }
}
void Consumo(){
    int i,m,k;
    for(i=0;i<5;i++){
        printf("Consumo do ");
        printf("%s:\n",carro[i]);
        printf("(Em Km/L)\n");
        scanf("%f",&consumo[i]);
    }
    for(i=0;i<5;i++){
      if(i==0){
          m=consumo[i];
          k=i;
      }
      if(m>consumo[i]){
          m=consumo[i];
          k=i;
      }
    }
    printf("O carro mais economico:%s\n",carro[k]);
    printf("O que cada carro gasta de combustivel a cada 1000km\n");
    for(i=0;i<5;i++){
        printf("Consumo do ");
        printf("%s(em Litros):\n",carro[i]);
        printf("%.2fL\n",1000*consumo[i]);
    }
}
int main()
{
   preencher();
   Consumo();

    return 0;
}
