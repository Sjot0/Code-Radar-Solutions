#include<stdio.h>

int main(){
    int a;
    int count=0;
    scanf("%d",&a);
    for(int i=1,i<a+1,i++){
        if(a%i==0){
            count++;
        }
    }
    if (count=2){
        printf("Prime");
    }
    else{
        printf("Not Prime")
    }

}