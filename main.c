#include<stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %c %d",&a,&c,&b);
    if(c=='+'){
        printf("%d\n",a+b);
    }
    if(c=='-'){
        printf("%d\n",a-b);
    }

    if(c=='*'){
        printf("%d\n",a*b);
    }
    
    if(c=='/'){
        if(b!=0){
            printf("%d\n",a/b);
        }else{
            printf("You can't devide by 0");
        }

    }
    return 0;
}
