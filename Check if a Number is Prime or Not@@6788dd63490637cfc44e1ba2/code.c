#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int i;
    for (i=2; i<=num ; i++){

    
        if(num%i==0){
            printf("Not Prime");
            break;

            }
        else{
            printf("Prime");
            break;
            }

}
    return 0;

}