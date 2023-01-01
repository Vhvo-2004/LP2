
#include <stdio.h>
float m,M,e;
int i,j,h,min,t,s;
int main()
{
    scanf("%f",&m);
    M=m;
    for(i=0;m>0.5;i++){
        m=m/2;
    }
    t=50*i;
    h=t/3600;
    min=t/60;
    s=t%60;
    printf("Massa inicial:%.2f\nMassa final:%.2f\n",M,m);
    printf("Tempo estimado:\n%dh:%dmin:%ds",h,min,s);
    return 0;
}
