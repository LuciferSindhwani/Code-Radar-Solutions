#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    if((a%5==0)&&(a%11==0)){printf("Divisible");}
    else{printf("Not Divisible");}
}