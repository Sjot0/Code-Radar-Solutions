#include <stdio.h>



int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    a=a/a;
    b=b/b;

    if(a==-b)
    {
        printf("True");
    }
    else
    {

    printf("False");
    }
    return 0;
}