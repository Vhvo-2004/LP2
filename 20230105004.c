
#include <stdio.h>
int fat(int a){
    int fat,i;
    fat=1;
    for(i=1;i<=a;i++){
        fat=fat*i;
    }
    return fat;
    
}
int T;
int main()
{
    scanf("%d",&T);
    printf("%d\n",fat(T));

    return 0;
}
