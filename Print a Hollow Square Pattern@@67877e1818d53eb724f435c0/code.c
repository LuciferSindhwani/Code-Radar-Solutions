// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    if (a <= 1) {
        for(int i = 0; i < a; i++) { printf("*"); }
        printf("\n");
        return 0;
    }

    for(int i = 0; i < a; i++) { printf("*"); }
    printf("\n");

    for (int j = 0; j < a - 2; j++) {
        printf("*");
        for (int k = 0; k < a - 2; k++) {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }

    for(int i = 0; i < a; i++) { printf("*"); }
    return 0;
}
