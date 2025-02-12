#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=a-1;j>a-i;j--){
            printf(" ");
        }
        for(int k=0;k<=i;K++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}