#include <stdio.h>

int main(){
    int a;
    int sum=0;

    scanf("%d",&a);

    for (int i=0;i<a+1;i++){
        int sum+=i;
    printf("%d",sum);
    }
    return 0;
}