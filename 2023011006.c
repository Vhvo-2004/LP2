
#include <stdio.h>
void bin(int a){
    int vet[50],i,j,aux;
    aux=a;
    i=0;
    while(a>0){
        vet[i]=a%2;
        a=a/2;
        i++;
        
    }
    for(j=i-1;j>=0;j--){
        printf("%d",vet[j]);
    
    
}}
int t;
int main()
{
    scanf("%d",&t);
    bin(t);
    
    

    return 0;
}
