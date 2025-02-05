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

    printf("%s", welcome());
    }
    return 0;
}