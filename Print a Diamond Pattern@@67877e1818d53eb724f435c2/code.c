#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<2-i;j++){
            printf(" ");
        }
        for(int k=0;k<=(i*2);k++){
            printf("*");
        }
        printf("\n");
    }
}