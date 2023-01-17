
#include <stdio.h>
#include<math.h>
float verif(float a){
    while(a<0 || a>1){
        scanf("%f",&a);
    }
    return a;
    }
float arctan(float a){
    verif(a);
    int i,l;
    float k,D;
    l=1;
    D=0;
    for(i=1;fabs((pow(a,i)/i))>0.0001;i=i+2){
        if(l%2==1){
            D=D+(pow(a,i))/i;
        }else{
            D=D-(pow(a,i))/i;
        }
        l++;
    }
    return D;
    
}
void print(float a){
    printf("%f numero real\n %f arctang\n",a,arctan(a));
    
}
float t;
int main()
{
    scanf("%f",&t);
    print(t);
    
    

    return 0;
}
