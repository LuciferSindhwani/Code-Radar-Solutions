// Your code here...
#include<stdio.h>
int main(){

    int a;
    scanf("%d",&a);
    if (a>=90&&a<=100){
        printf("A");
    }
    else if (a>=80&&a<90){
        printf("B");
    }
    else if (a>=70&&a<80){
        printf("C");
    }else if (a>=60&&a70){
        printf("D");
    }else if (a<60){
        printf("E");
    }
    else{
        continue;
    }
    return 0;

}