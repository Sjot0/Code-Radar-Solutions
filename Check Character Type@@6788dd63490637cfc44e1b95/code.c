#include <stdio.h>
#include <ctype.h>


int main() {
    char a;
    scanf("%c",&a);
    if (isalpha(a)){
        if(a =='A' || a =='I' || a =='E' || a =='O' || a =='U' || a =='a' || a =='i' || a =='e' || a =='o' || a =='u' ){
            printf("Vowel");
            }
        else{
            printf("Consonant");
            }
            }
    else if(isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}