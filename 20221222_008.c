
#include <stdio.h>
#include<math.h>
float m,M,e;
int i,j,h,min,t,s,n,X[90000],k;
int main()
{
    scanf("%d",&n);
    
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
        if(i<=j){
            k=0;
        m=sqrt(pow(i,2)+pow(j,2));
        s=m;
        if(s==m && (s<=n && s>=1)){
            X[t]=m;
            for(h=0;h<t;h++){
                if(X[h]==s){
                    k=1;
                }
                
            }
            t++;
            if(k==0){
            printf("%d\n",s);
            }
            
        }
        }
    }
    }
    
    
        
    
    
    return 0;
}
