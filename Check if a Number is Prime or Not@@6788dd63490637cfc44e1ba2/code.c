#include <stdio.h>

int main(){
    int num , count=0;
    scanf("%d",&num);

    if (num<=1){
        printf("Not Prime");

    }
    for (int i=2;i<num+1;i++){
        if (num%i==0){
            count++;

        }
    if(count > 0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
    }
}