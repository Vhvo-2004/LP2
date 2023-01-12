
#include <stdio.h>
int digito(int n, int p){
    int i;
    i=0;
    while(n>0){
        if(n%10==p){
            i++;
        }
        n=n/10;
        
    }
    return i;
}
int n,d;
int main()
{
    scanf("%d",&n);
    scanf("%d",&d);
    printf("%d\n",digito(n,d));

    return 0;
}
