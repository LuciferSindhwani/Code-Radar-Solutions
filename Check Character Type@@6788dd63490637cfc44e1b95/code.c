// Your code here...
#include<stdio.h>
#include<ctype.h>
int main(){
char a;
scanf("%c",&a);
if (isalpha(a)){
if (isvowel(a)){
    printf("Vowel");
}
else{
    printf("Consonant");
}
}
else{
    if (isdigit(a)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}
return 0;
}