#include <stdio.h>



int main() {
    int num;
    scanf("%d ", &num);
    if(num>0){
        printf("Positive");
    }
    elif(num==0){
        printf("Zero");
    }
    else{
    printf("Negative");}
    return 0;
}