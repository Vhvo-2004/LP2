#include <stdio.h>
#include<math.h>
 int main(){
     float M,m,S,l,i;
     i=0;
     l=0;
     while(l>=0){
        scanf("%f",&l);  
        if(l<0){
		}else{
		
		
        if(i==0){
            M=l;
            m=l;
        }
		
		if(M<l){
         M=l;
        }
		if(m>l){
         m=l;
        }
        S=S+l;
        i++;}
     }
     
     printf("Maior Nota:%f\nMenor Nota:%f\nMedia aritmetica:%f\n",M,m,(S/i));
     return 0;
 }
