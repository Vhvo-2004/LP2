
#include <stdio.h>
int fib(int a){
    int n,i;
    n=1;
    if(a==1 || a==2){
        return 1;
    }else{
        return fib(a-1)+fib(a-2);
        
    }
        
    
    
}
int T,m;
int main()
{
    scanf("%d",&T);
    
    printf("%d\n",fib(T));

    return 0;
}
