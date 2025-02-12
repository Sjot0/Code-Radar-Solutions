#include <stdio.h>

int main(){
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);

    if(c=='*'){
        int product=a*b;
        printf("%d",product);

    }
    else if(c=='/'){
        if(a==0 || b==0){
            printf("Divisible BY Zero");
        }
        else{
            int div=a/b;
            printf("%d",div);
            }
    }
    else if(c=='+'){
        int sum=a+b;
        printf("%d",sum);

    }
    else if(c=='-'){
        int sub=a-b;
        printf("%d",sub);
    }
    else{
        printf("Invalid");
    }
    return 0;
}