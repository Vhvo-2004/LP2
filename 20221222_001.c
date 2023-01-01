
#include <stdio.h>
#include <math.h>
float Y,X[90],e;
int i;

int main()
{
    e=0.1;
    scanf("%f",&Y);
    X[0]=Y/2;
    for(i=0;fabs(X[i]-X[i-1])>e;i++){
        X[i+1]=X[i]-((X[i]*X[i]-Y)/(2*X[i]));
        
        
        
        
    }
printf("%f\n%f",X[i],sqrt(Y));
    return 0;
}
