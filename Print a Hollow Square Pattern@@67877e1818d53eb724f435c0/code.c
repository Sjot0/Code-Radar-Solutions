#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    for (int i=1;i<a+1;i++){
        for (int j=1;j<a+1;j++){
            if (i == 0 || i == a - 1 || j == 0 || j == a - 1) {
            
                printf("*");
            }
            else{
                printf(" ");}
        }
        printf("\n");

    }


}