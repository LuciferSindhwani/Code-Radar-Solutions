#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    for (int i=0;i<a;i++){
        for (int j=a;j>a-i;j--){
            printf(" ");
        }
        for (int k=0;k<=i;k+=2){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}