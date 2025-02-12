#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int count=0;

    for (int i =2 ;i<num+1;i++){
        count++;
    }
    if(count>2){
        printf("Not Prime");
    
    }
    else{
        printf("Prime");
    }
    return 0;

}