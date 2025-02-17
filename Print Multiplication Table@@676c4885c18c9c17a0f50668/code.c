#include<stdio.h>

int main(){
    int a;
    int multi;
    scanf("%d",&a);

    for(int i=1;i<11;i++){
        multi= a * i;
        printf("%d x %d = %d\n",a,i,&multi);
    }
    return 0;
}