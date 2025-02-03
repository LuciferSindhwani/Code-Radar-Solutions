#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
int a;
scanf("%d",&a);
if (a>0){print("Positive");}
else if(a<0){printf("Negitive");}
else{printf("Zero");}
return 0;
}