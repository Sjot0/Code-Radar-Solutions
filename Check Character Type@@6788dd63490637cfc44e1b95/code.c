#include <stdio.h>



int main() {
    char a;
    scanf("%c",&a);
    if(a =='A' || a =='I' || a =='E' || a =='O' || a =='U' || a =='a' || a =='i' || a =='e' || a =='o' || a =='u' ){
        printf("Vowel");
    }
    else{
    printf("Consonant");
    }
    return 0;
}