#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for (int a=1 ; a<=9;a++){}
        for (int i=n; i>=1;i--){
            for (int j=i ;j>=1;j--){
                printf("%d ",a);
            }
            printf("\n");
    }
    
    return 0;

}