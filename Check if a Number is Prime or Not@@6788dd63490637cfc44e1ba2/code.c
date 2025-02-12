#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    if (num<=1){
        printf("Not Prime");

    }
    for (int i=2;i<num+1;i++){
        if (num%i==0){
            printf("Not Prime");

        }
    else{
        printf("Prime");
    }
    return 0;
    }
}