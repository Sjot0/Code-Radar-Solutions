#include<stdio.h>

int main(){
    int a;
    int multi;
    scanf("%d",&a);

    for(int i=1;i<11;i++){
        multi= a * i;
        printf("2 x %d = %d\n",a,&multi);
    }
    return 0;
}