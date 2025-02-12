#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int i;
    for (i=2; i<num+1 ; i++){

    
        if(num%i==0){
            printf(" Prime");

        }
        else{
            printf("Not Prime");
        }

}
    return 0;

}