#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char Nomes[200][100][10][56];
int valor[200],valorord[4][200],valordD[200],valorordA[200],valorordM[200],posD[4][90],valoraux[100];
void Ordenar(char Nomes[200][100][10][56],int valor[200],int n){
	int i,j,pos,aux,g,d,a,m,e1,e2,e3,e4;
	g=0;
	d=0;
	m=0;
	a=0;
	for(i=0;i<n;i++){
		if(strcmp(Nomes[i][100][56],"g")==0){
		valorord[0][g]=valor[i];
		g++;
	}if(strcmp(Nomes[i][100][56],"d")==0){
		valorord[1][d]=valor[i];
		d++;
	}if(strcmp(Nomes[i][100][56],"m")==0){
		valorord[2][m]=valor[i];
		m++;
	}
	if(strcmp(Nomes[i][100][56],"a")==0){
		valorord[3][a]=valor[i];
		a++;
	}
	}
	for(i=0;i<g-1;i++){
		pos=i;
		for(j=i+1;j<g;j++){
			if(valorord[0][pos]<valorord[0][j]){
				pos=j;
			}
		}
		if(i!=pos){
			aux=valorord[0][i];
			valorord[0][i]=valorord[0][pos];
			valorord[0][pos]=aux;
		}
	}
	for(i=0;i<d-1;i++){
		pos=i;
		for(j=i+1;j<d;j++){
			if(valorord[1][pos]<valorord[1][j]){
				pos=j;
			}
		}
		if(i!=pos){
			aux=valorord[1][i];
			valorord[1][i]=valorord[1][pos];
			valorord[1][pos]=aux;
		}
	}
	for(i=0;i<m-1;i++){
		pos=i;
		for(j=i+1;j<m;j++){
			if(valorord[2][pos]<valorord[2][j]){
				pos=j;
			}
		}
		if(i!=pos){
			aux=valorord[2][i];
			valorord[2][i]=valorord[2][pos];
			valorord[2][pos]=aux;
		}
	}
	for(i=0;i<a-1;i++){
		pos=i;
		for(j=i+1;j<a;j++){
			if(valorord[3][pos]<valorord[3][j]){
				pos=j;
			}
		}
		if(i!=pos){
			aux=valorord[3][i];
			valorord[3][i]=valorord[3][pos];
			valorord[3][pos]=aux;
		}
	}
	for(i=0;i<a;i++){
		printf("\t%d",valorord[3][i]);
	}
	printf("\n");
	for(i=0;i<m;i++){
		printf("\t%d",valorord[2][i]);
	}
	printf("\n");
	for(i=0;i<d;i++){
		printf("\t%d",valorord[1][i]);
	}
	printf("\n");
	for(i=0;i<g;i++){
		printf("\t%d",valorord[0][i]);
	}
	printf("\n");
	e1=0;
	for(i=0;i<g;i++){
		for(j=0;j<n;j++){
			if(valorord[0][i]==valor[j] && strcmp(Nomes[j][100][56],"g")==0 && e1==0){
				printf("%s -goleiro\n",Nomes[j][10][56]);
				valor[j]=-1;
				e1++;
			}
		}
		
	}
	e2=0;
	for(i=0;i<d;i++){
		for(j=0;j<n;j++){
			if(valorord[1][i]==valor[j] && strcmp(Nomes[j][100][56],"d")==0 && e2<4){
				printf("%s -Defensor\n",Nomes[j][10][56]);
				valor[j]=-1;
				
				e2++;
			}
		}
	}
	e3=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(valorord[2][i]==valor[j] && strcmp(Nomes[j][100][56],"m")==0 && e3<4){
				printf("%s -Meio campista\n",Nomes[j][10][56]);
				valor[j]=-1;
				e3++;
			}
		}
	}
	e4=0;
	for(i=0;i<a;i++){
		for(j=0;j<n;j++){
			if(valorord[3][i]==valor[j] && strcmp(Nomes[j][100][56],"a")==0 && e4<2){
				printf("%s -Atacante\n",Nomes[j][10][56]);
				valor[j]=-1;
				e4++;
			}
		}
	}
}
void Ordenar1(int valor[],int n){
	int i,j,pos,aux;
	for(i=0;i<n-1;i++){
		pos=i;
		for(j=i+1;j<n;j++){
			if(valor[i]>valor[j]){
				pos=j;
			}
		}
		if(pos!= i){
			aux=valor[i];
			valor[i]=valor[pos];
			valor[pos]=aux;
		}
	}
}
void leitura (char Nomes[200][100][10][56]){
	int i,w,j,MaiorG,k,g;
	w=23;
	for(i=0;i<w;i++){
		scanf(" %s",Nomes[i][10][56]);
	}
	for(i=0;i<w;i++){
		printf("Qual funcao do %s\n",Nomes[i][10][56]);
		scanf(" %s",Nomes[i][100][56]);
		printf("\n");
	}
	for(i=0;i<w;i++){
		printf("avaliacao do %s\n",Nomes[i][10][56]);
		scanf(" %s",&Nomes[i][100][10]);
		printf("\n");
	}
	for(i=0;i<w;i++){
		printf("funcao do %s \n",Nomes[i][10][56]);
		printf("%s\n",Nomes[i][100][56]);
		printf("Avaliacao do %s: %s",Nomes[i][10][56],Nomes[i][100][10]);
		printf("\n");
	}
	for(i=0;i<w;i++){
		valor[i]=atoi(Nomes[i][100][10]);
	}
	Ordenar(Nomes,valor,w);
	}
		

int main(){

leitura(Nomes);


return 0;
}
