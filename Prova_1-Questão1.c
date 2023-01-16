
#include <stdio.h>
#include<math.h>
float M,m,S,l,i;
 int main(){
     i=0;
     
     while(1){
        scanf("%f",&l);  
        if(l<0){
            break;
        }
        if(i==0){
            M=l;
            m=l;
        }if(M<l){
         M=l;
     }if(m>l){
         m=l;
     }
     S=S+l;
     i++;
     }
     printf("Maior Nota:%f\nMenor Nota:%f\nMedia aritmetica:%f\n",M,m,(S/i));
     return 0;
 }
