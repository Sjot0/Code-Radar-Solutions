#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int i;
    if(num<=1){
        printf("Not Prime");
        return 0;
    }
    for (i=2; i<=num ; i++){

    
        if(num%i==0){
            printf("Not Prime");
            return 0;

            }
    else{
        printf("Prime");
        return 0;
            }

}
    return 0;

}