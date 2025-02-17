#include<stdio.h>

int main(){
    int a;
    int multi;
    scanf("%d",&a);

    for(int i=1;i<11;i++){
        multi=2*i;
        printf("2 x %d = %d",&a,&multi);
    }
    return 0;
}