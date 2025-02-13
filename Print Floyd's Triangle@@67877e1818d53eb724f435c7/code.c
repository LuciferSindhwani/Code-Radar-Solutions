#include<stdio.h>
int main(){
    int a;
    int num = 1; // Start num from 1
    scanf("%d",&a);
    for (int i = 1; i <= a; i++) { // Use 'a' instead of 'n'
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
