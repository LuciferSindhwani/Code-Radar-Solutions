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
    for(int z=0;z<=a-1;z++){
        for(int b=1;b<z;b++){
            printf("*");
        }
        printf("\n");
    }
}