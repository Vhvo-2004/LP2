#include <stdio.h>
int scanintintervalo (int a){
    while(1){  
    if(a<1000 && a>0){
    	return a;
        break;
    }else{
       
        printf("Informe um valor valido!No intevalo de: ]0,1000[\n");
        scanf("%d",&a);
    }  
        
    }
}
int perc(float a,float b){
    float perc;
    perc=(a/b)*100;
    printf("%.2f% \n",perc);
    return perc;
}

float absdif(float a,float b){
    float mod;
    if(a>b){
        mod=a-b;
        
    }else{
        mod=b-a;
    }
    return mod;
}

int x,y;
float p,xf,yf;
int main()
{
    scanf("%d",&x);
    x=scanintintervalo(x);
    scanf("%d",&y);
    y=scanintintervalo(y);
    xf=x;
    yf=y;
    if(x>y){
        p=perc(yf,xf);
        printf("%f eh o modulo da diferenca",absdif(xf,yf));
    }else{
        p=perc(xf,yf);
        printf("%f eh o modulo da diferenca",absdif(xf,yf));
    }
    

    return 0;
}
