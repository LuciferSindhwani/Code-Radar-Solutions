#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<a-i-1;j++){
            printf(" ");
        }
        for(int k=0;k<=(i*2);k++){
            printf("*");
        }
        printf("\n");
    }
    for(int z=0;z<a-1;z++){
       
        for(int h=0;h<=z;h++){
            printf(" ");
        }
        for(int w=0;w<a-1-z;w++){
            printf("*");
        }
       for(int w=0;w<a-2-z;w++){
            printf("*");
        }
       
        printf("\n");
    }
}
